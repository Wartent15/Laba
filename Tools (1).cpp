#include "Tools.h"


void Tools::showMenu() {
	std::cout << "1 - Посмотреть погоду." << std::endl;
	std::cout << "2 - Посмотреть прогноз на 5 дней." << std::endl;
	std::cout << "3 - Ввести новый город." << std::endl;
	std::cout << "4 - Выход" << std::endl;
}


void Tools::showCurrentWeather(nlohmann::json data) {
	std::cout << "Погода: " << data["weather"][0]["main"] << std::endl;
	std::cout << "Температура: " << (int)(data["main"]["temp"].get<double>() - 273.15) << std::endl;
}


void Tools::showFiveDaysForecast(nlohmann::json data) {
	for (int i = 0; i < data["list"].size(); i++) {
		std::cout << data["list"][i]["dt_txt"];
		std::cout << " " << data["list"][i]["weather"][0]["main"];
		std::cout << " Temp: " << (int)(data["list"][i]["main"]["temp"].get<double>() - 273.15) << std::endl;
	}
}

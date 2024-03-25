#include "Tools.h"


	void Tools::showMenu() {
		std::cout << "1 - Посмотреть погоду." << std::endl;
		std::cout << "2 - Ввести новый город." << std::endl;
		std::cout << "3 - Выход" << std::endl;
	}

	void Tools::showCurrentWeather(nlohmann::json data) {
		std::cout << "Погода: " << data["weather"][0]["main"] << std::endl;
		std::cout << "Температура: " << data["main"]["temp"] - 273.15 << std::endl;
	}

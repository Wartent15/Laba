#pragma once
#include <iostream>
#include <string>
#include <httplib.h>
#include <nlohmann/json.hpp>


class WebApp {
	httplib::Client *cli;
	std::string API;
	std::string request;
	nlohmann::json result;
	std::string cityName;
public:
	WebApp();

	WebApp(std::string client, std::string API, std::string cityName);

	nlohmann::json getCurrentWeather();

	nlohmann::json getFiveDaysForecast();
};

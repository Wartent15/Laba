#include "WebApp.h"


using json = nlohmann::json;


WebApp::WebApp(std::string client, std::string API, std::string cityName) {
	this->cli = new httplib::Client(client);
	this->API = API;
	this->cityName = cityName;
}


json WebApp::getCurrentWeather() {
	this->request = "/data/2.5/weather?";
	this->request += "q=" + this->cityName;
	this->request += "&appid=" + this->API;
	this->result = json::parse(this->cli->Get(request)->body);
	return this->result;
}


#pragma once
#include <string>
using std::string;

class MobileException {
protected:
	string text;
public:
	MobileException() { text = "undefined exception!"; }
	MobileException(string text) { this->text = text; }
	virtual ~MobileException(){}

	virtual string showMessage()const = 0;
};

//--------------------------------------------------

class NameException : public MobileException {
	string name;
public:
	NameException(string text) :MobileException(text) {
		name = "empty";
	}
	NameException(string text, string name) :MobileException(text) {
		this->name = name;
	}
	string showMessage()const override {
		return "NameException: " + text + ".\nName: " + name + ".\n\n";
	}
};

class PriceException : public MobileException {
	float price;
public:
	PriceException(string text, float price) : MobileException(text) {
		this->price = price;
	}
	string showMessage()const override {
		return "PriceException: " + text + ".\nPrice: " + 
			std::to_string(price) + ".\n\n";
	}
};

class SecondsException : public MobileException {
	int seconds;
public:
	SecondsException(string text, int seconds) : MobileException(text) {
		this->seconds = seconds;
	}
	string showMessage()const override {
		return "SecondsException: " + text + ".\nSeconds: " +
			std::to_string(seconds) + ".\n\n";
	}
};
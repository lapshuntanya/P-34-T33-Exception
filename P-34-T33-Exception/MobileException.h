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

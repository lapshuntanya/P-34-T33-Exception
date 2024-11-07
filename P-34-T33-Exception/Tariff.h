#pragma once
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

class Tariff
{
	std::string name;
public:
	Tariff();
	Tariff(std::string name);

	void setName(std::string name);

	std::string getName()const;

	virtual float calcCost(int seconds)const = 0;
	virtual void show()const;
};


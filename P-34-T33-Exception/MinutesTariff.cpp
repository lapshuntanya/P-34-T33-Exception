#include "MinutesTariff.h"

MinutesTariff::MinutesTariff()
{
    price = 1.0f;
}

MinutesTariff::MinutesTariff(std::string name, float price):Tariff(name)
{
    this->price = price;
}

void MinutesTariff::setPrice(float price)
{
    this->price = price;
}

float MinutesTariff::getPrice() const
{
    return price;
}

float MinutesTariff::calcCost(int seconds) const
{
    return (seconds /60)*price;
}

void MinutesTariff::show() const
{
    cout << "Minutes Tariff\n";
    Tariff::show();
    cout << "Price for minutes: " << price << endl;
}

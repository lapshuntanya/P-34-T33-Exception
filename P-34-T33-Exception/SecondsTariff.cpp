#include "SecondsTariff.h"
 

SecondsTariff::SecondsTariff()
{

    price = 1.0f;
}

SecondsTariff::SecondsTariff(std::string name, float price) :Tariff(name)
{
    this->price = price;
}

void SecondsTariff::setPrice(float price)
{
    this->price = price;
}

float SecondsTariff::getPrice() const
{
    return price;
}

float SecondsTariff::calcCost(int seconds) const
{
    return price * seconds;
}

void SecondsTariff::show() const
{
    cout << "Seconds Tariff\n";
    Tariff::show();
    cout << "Price for seconds: " << price << endl;
}

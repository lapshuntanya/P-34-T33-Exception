#include "Tariff.h"

Tariff::Tariff()
{
    name = "none";

}

Tariff::Tariff(std::string name)
{
    this->name = name;
}

void Tariff::setName(std::string name)
{
    this->name = name;
}

std::string Tariff::getName() const
{
    return name;
}


void Tariff::show() const
{
    cout << "Name tariff: " << name << endl;
}

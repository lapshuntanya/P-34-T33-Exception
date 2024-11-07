#include "Tariff.h"

Tariff::Tariff()
{
    name = "none";
}

Tariff::Tariff(std::string name)
{
    if (name.empty()) throw new NameException("string name is empty");
    if (name.find("XXX") != -1)
        throw new NameException("bad word", name);
    if (name.size() > 10)
        throw new NameException("too long", name);

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

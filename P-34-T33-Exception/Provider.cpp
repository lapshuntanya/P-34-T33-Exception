#include "Provider.h"

Provider::Provider(string name)
{
    this->name = name;
}

void Provider::setName(string name)
{
    this->name = name;
}

string Provider::getName() const
{
    return name;
}

void Provider::addTariff(Tariff* obj)
{
    tariffs.push_back(obj);
}

void Provider::showList() const
{
    for (int i = 0; i < tariffs.size(); i++) {
        tariffs[i]->show();
        cout << endl;
    }
}

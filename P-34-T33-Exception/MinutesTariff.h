#pragma once
#include "Tariff.h"

class MinutesTariff :   public Tariff
{   
    float price;
public:
    MinutesTariff();
    MinutesTariff(std::string name, float price);

    void setPrice(float price);
    float getPrice()const;

    virtual float calcCost(int seconds)const override;
    virtual void show()const override;
};


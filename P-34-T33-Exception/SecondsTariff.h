#pragma once
#include "Tariff.h"

class SecondsTariff:   public Tariff
{
    float price;
public:
    SecondsTariff();
    SecondsTariff(std::string name, float price);
   
    void setPrice(float price);
    float getPrice()const;

    virtual float calcCost(int seconds)const override;
    virtual void show()const override;
};


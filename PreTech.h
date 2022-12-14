#pragma once 

#include "ITech.h"

class PreTech : virtual public ITech
{
public:
    PreTech(int battery);
    void Show() override;

protected:
    int _battery;
};

class Mobile final : public PreTech
{
public:
    Mobile(int battery, string model);
    void Show() override;

private:
    string _model;
};

class Phones final : public PreTech
{
public:
    Phones(int battery, int volume);
    void Show() override;

private:
    int _volume;
};

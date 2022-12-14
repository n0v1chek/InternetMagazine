#pragma once 

#include "ITech.h"

class Tech : virtual public ITech
{
public:
    Tech(int cost);

    void Show() override;
protected:
    int _cost;
};

class Fridge final : public Tech
{
public:
    Fridge(int cost, string color);
    void Show() override;
private:
    string _color;
};

class TV final : public Tech
{
public:
    TV(int cost, int disp);

    void Show() override;
private:
    int _disp;
};

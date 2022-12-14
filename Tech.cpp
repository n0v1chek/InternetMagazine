#include "Tech.h"


Tech::Tech(int cost) : _cost(cost)
{
}

void Tech::Show()
{
    cout << "Cost " << _cost << endl;
}


Fridge::Fridge(int cost, string color) : Tech(cost), _color(color)
{
}

void Fridge::Show()
{
    cout << _color << " fridge cost " << _cost << endl;
}

TV::TV(int cost, int disp) : Tech(cost), _disp(disp)
{
}

void TV::Show()
{
    cout << " TV with display " << _disp << " cost " << _cost << endl;
}
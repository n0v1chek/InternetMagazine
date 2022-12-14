#include "Nintendo.h"

NintendoSwitch::NintendoSwitch(int cost, int battery) : Tech(cost), PreTech(battery)
{
}

void NintendoSwitch::Show()
{
    cout << "NintendoSwitch cost " << _cost << " and has battery " << _battery << endl;
}
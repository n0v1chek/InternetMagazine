#include "PreTech.h"

PreTech::PreTech(int battery) : _battery(battery)
{
}

void PreTech::Show() { cout << "Battery " << _battery << endl; }

Mobile::Mobile(int battery, string model) : PreTech(battery), _model(model)
{
}

void Mobile::Show()
{
    cout << " Phone " << _model << " has battery size " << _battery << endl;
}

Phones::Phones(int battery, int volume) : PreTech(battery), _volume(volume)
{
}

void Phones::Show()
{
    cout << " Phones with volume " << _volume << " has battery " << _battery << endl;
}
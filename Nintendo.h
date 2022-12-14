#pragma once 

#include "Tech.h"
#include "PreTech.h" 

class NintendoSwitch final : public Tech, PreTech
{
public:
    NintendoSwitch(int cost, int battery);

    void Show() override;
};
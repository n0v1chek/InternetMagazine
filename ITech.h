#pragma once  

#include <iostream>
using namespace std;

class ITech
{
public:
    virtual void Show() = 0;
    virtual ~ITech() = default;
};

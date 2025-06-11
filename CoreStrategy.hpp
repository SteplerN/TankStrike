#pragma once

#include "Globals.hpp"

class CoreStrategy
{
public:
    virtual ~CoreStrategy();
    virtual void doTheStrategy();
};
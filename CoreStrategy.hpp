#pragma once

class CoreStrategy
{
public:
    virtual ~CoreStrategy();
    virtual void doTheStrategy() = 0;
};
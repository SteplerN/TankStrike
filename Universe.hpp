#pragma once

#include "World.hpp"

class Universe {

private:

    bool m_IsLoaded = false;

    World& m_TheWorld;

public:

    Universe(World p_TheGivenWorld) : m_TheWorld(p_TheGivenWorld) {}

    bool isUniverseLoaded() const
    {
        return m_IsLoaded;
    }

    World& getTheWorld()
    {
        return m_TheWorld;
    }

};
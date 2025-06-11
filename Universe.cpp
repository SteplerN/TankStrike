#include "Universe.hpp"

Universe::Universe(World p_TheGivenWorld) : m_TheWorld(p_TheGivenWorld) {}

bool Universe::isUniverseLoaded() const
{
    return m_IsLoaded;
}

World& Universe::getTheWorld()
{
    return m_TheWorld;
}
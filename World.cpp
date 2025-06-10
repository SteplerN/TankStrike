#include "World.hpp"

using WorldCollection = std::deque<std::unique_ptr<GameObject>>;

const WorldCollection& World::getTheWorld() const
{
    return m_AllObjectsInTheWorld;
}

void World::addToTheWorld(std::unique_ptr<GameObject> p_WhatToAdd)
{
    m_AllObjectsInTheWorld.push_back(std::move(p_WhatToAdd));
}
#pragma once

#include <deque>
#include <memory>

#include "GameObject.hpp"


class World
{

    using WorldCollection = std::deque<std::unique_ptr<GameObject>>;

private:

    WorldCollection m_AllObjectsInTheWorld;

public:

    const WorldCollection& getTheWorld() const;

    void addToTheWorld(std::unique_ptr<GameObject> p_WhatToAdd);

};

World Level_1;
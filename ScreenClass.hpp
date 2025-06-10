#pragma once

#include <SFML/Graphics.hpp>

#include <string>

#include "World.hpp"

class ScreenClass : public sf::RenderWindow
{

public:

    ScreenClass(sf::VideoMode mode, const std::string& title);

    void drawTheWorld(World& world_to_draw);

};
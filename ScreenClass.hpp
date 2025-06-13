#pragma once

#include <SFML/Graphics.hpp>

#include <string>
#include <deque>

#include "World.hpp"
#include "Universe.hpp"

class ScreenClass : public sf::RenderWindow
{

    static std::deque <ScreenClass*> m_AllWindows;

public:

    ScreenClass(sf::VideoMode mode, const std::string& title);

    void drawTheWorld(World& world_to_draw);

    void drawTheUniverse(Universe& p_UniverseToDraw);

    static void killAllWindows();

};

ScreenClass g_MainWindow(sf::VideoMode(900, 900), "main_window");
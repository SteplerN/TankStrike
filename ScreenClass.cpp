#include "ScreenClass.hpp"


ScreenClass::ScreenClass(sf::VideoMode p_Mode, const std::string& p_Title) : sf::RenderWindow(p_Mode, p_Title) 
{
    m_AllWindows.push_back(this);
}

void ScreenClass::drawTheWorld(World& p_WorldToDraw)
{

    for (auto& i : p_WorldToDraw.getTheWorld())
    {
        draw(*i);
    }

}

void ScreenClass::drawTheUniverse(Universe& p_UniverseToDraw)
{
    drawTheWorld(p_UniverseToDraw.getTheWorld());
}

void ScreenClass::killAllWindows()
{

    for (auto& current_window : m_AllWindows)
    {
        current_window->close();
    }

}
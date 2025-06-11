#include "ScreenClass.hpp"


ScreenClass::ScreenClass(sf::VideoMode p_Mode, const std::string& p_Title) : sf::RenderWindow(p_Mode, p_Title) {}

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
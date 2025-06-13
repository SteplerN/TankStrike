#pragma once

#include <SFML/Graphics.hpp>

class GameObject : public sf::Sprite
{

public:

    virtual void doRoutine() = 0;
    virtual ~GameObject();

};
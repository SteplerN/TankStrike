#pragma once

#include <SFML/Graphics.hpp>

class GameObject : public sf::Drawable
{

public:

    virtual void doRoutine();

    virtual ~GameObject();

};
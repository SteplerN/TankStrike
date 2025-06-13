#pragma once

#include <string>
#include <fstream>

#pragma once

#include <SFML/Graphics.hpp>

#include "GameObject.hpp"
#include "World.hpp"


class Wall : public GameObject
{

private:

    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:

    Wall(float p_CoordX, float p_CoordY, sf::Texture& p_GivenSprite);

    static void parseTextFileToCreateWalls(std::string p_NameOfFile, World& p_TheWorld, sf::Texture& p_GivenTexture);

    void doRoutine() override;

};
#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include "GameObject.hpp"

class Player : public GameObject, public sf::Sprite
{

private:

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:

	Player(float p_SpawnX, float p_SpawnY, sf::Texture& p_FileWithPlayerTexture);

	bool isIntersectingWithWalls();

	void moveMainCharacterBasesOnArrows(sf::RenderWindow& p_GivenWindow, float p_Speed, const float p_c_HitboxK);
};
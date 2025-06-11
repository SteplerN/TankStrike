#pragma once

#include <string>
#include <memory>

#include <SFML/Graphics.hpp>

#include "GameObject.hpp"
#include "World.hpp"

class Player : public GameObject, public sf::Sprite
{

private:

	double m_PlayerSpeed = 1.f;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:

	Player(float p_SpawnX, float p_SpawnY, sf::Texture& p_FileWithPlayerTexture);

	bool isIntersectingWithWalls();

	// void moveCharacterBasesOnInput(sf::RenderWindow& p_GivenWindow, float p_Speed, const float p_c_HitboxK);

	void moveCharacterBasesOnInput(const float p_Speed);

	void doRoutine() override;

};

auto g_Player_1_Ptr = std::make_unique<Player>(400.f, 400.f, g_PlayerTexture, Level_1);
Player& g_Player_1 = *g_Player_1_Ptr;
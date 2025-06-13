#pragma once

#include <string>
#include <memory>

#include <SFML/Graphics.hpp>

#include "GameObject.hpp"
#include "World.hpp"
#include "Universe.hpp"

class Player : public GameObject
{

private:

	double m_PlayerSpeed = 1.f;

	Universe& m_Universe;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:

	Player(float p_SpawnX, float p_SpawnY, sf::Texture& p_FileWithPlayerTexture, Universe& p_Universe);

	bool isIntersectingWithWalls(int p_DirectionX, int p_DirectionY, float p_Speed);

	void moveCharacterBasesOnInput(const float p_Speed);

	void doRoutine() override;

};

// auto g_Player_1_Ptr = std::make_unique<Player>(400.f, 400.f, g_PlayerTexture, Level_1);
// Player& g_Player_1 = *g_Player_1_Ptr;
#include "Player.hpp"

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
        target.draw(static_cast<sf::Sprite>(*this), states);
}

Player::Player(float p_SpawnX, float p_SpawnY, sf::Texture& p_FileWithPlayerTexture) : sf::Sprite(p_FileWithPlayerTexture)
{

    setPosition(p_SpawnX, p_SpawnY);

}

bool Player::isIntersectingWithWalls() { return false; }

void Player::moveMainCharacterBasesOnArrows(sf::RenderWindow& p_GivenWindow, float p_Speed, const float p_c_HitboxK)
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {

        if (getPosition().x - p_Speed > 0 && !isIntersectingWithWalls())
        {
            move(-p_Speed, 0.f);
            return;
        }

    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {

        if (getPosition().x < p_GivenWindow.getSize().x - p_c_HitboxK * 2.f)
        {
            move(p_Speed, 0.f);
            return;
        }

    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {

        if (getPosition().y < p_GivenWindow.getSize().y - p_c_HitboxK * 2.f)
        {
            move(0.f, p_Speed);
            return;
        }

    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {

        if (getPosition().y > 0)
        {
            move(0.f, -p_Speed);
            return;
        }

    }
}
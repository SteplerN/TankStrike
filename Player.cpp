#include "Player.hpp"

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
        target.draw(static_cast<sf::Sprite>(*this), states);
}

Player::Player(float p_SpawnX, float p_SpawnY, sf::Texture& p_GivenTexture, Universe& p_Universe) 
    :  m_Universe(p_Universe)
{
    setTexture(p_GivenTexture);
    setPosition(p_SpawnX, p_SpawnY);
}

bool Player::isIntersectingWithWalls(int p_DirectionX, int p_DirectionY, float p_Speed)
{
    sf::FloatRect future_bounds = getGlobalBounds();
    future_bounds.left += p_DirectionX * p_Speed;
    future_bounds.top += p_DirectionY * p_Speed;
    for (const auto& obj : m_Universe.getTheWorld().getTheWorld())
    {
        if (obj.get() == this) continue;
        if (future_bounds.intersects(obj->getGlobalBounds())) return true;
    }
    return false;
}

void Player::moveCharacterBasesOnInput(const float p_Speed)
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {

        if (getPosition().x - p_Speed > 0 && !isIntersectingWithWalls(-1, 0, p_Speed))
        {
            move(-p_Speed, 0.f);
            return;
        }

    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {

        if (getPosition().x - p_Speed > 0 && !isIntersectingWithWalls(1, 0, p_Speed))
        {
            move(p_Speed, 0.f);
            return;
        }

    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {

        if (getPosition().x - p_Speed > 0 && !isIntersectingWithWalls(0, 1, p_Speed))
        {
            move(0.f, p_Speed);
            return;
        }

    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {

        if (getPosition().x - p_Speed > 0 && !isIntersectingWithWalls(0, -1, -p_Speed))
        {
            move(0.f, -p_Speed);
            return;
        }

    }

}

void Player::doRoutine()
{
    moveCharacterBasesOnInput(m_PlayerSpeed);
}

/*
void Player::moveCharacterBasesOnInput(sf::RenderWindow& p_GivenWindow, float p_Speed, const float p_c_HitboxK)
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
}*/
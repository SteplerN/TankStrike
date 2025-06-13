#include "Wall.hpp"


void Wall::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(static_cast<sf::Sprite>(*this), states);
}

Wall::Wall(float p_CoordX, float p_CoordY, sf::Texture& p_GivenTexture)
{
    setTexture(p_GivenTexture);
    setPosition(p_CoordX, p_CoordY);
}

void Wall::parseTextFileToCreateWalls(std::string p_NameOfFile, World& p_TheWorld, sf::Texture& p_GivenTexture)
{
    std::ifstream description_file(p_NameOfFile);
    std::string current_line;

    double k = 60;

    while (std::getline(description_file, current_line))
    {
        int wall_x = 0, wall_y = 0;
        std::string buffer = "";

        for (char current_symbol : current_line)
        {

            if (current_symbol == ' ')
            {
                wall_x = std::stoi(buffer);
                buffer.clear();
            }
            else
            {
                buffer += current_symbol;
            }

        }

        wall_y = std::stoi(buffer);
        buffer.clear();
        p_TheWorld.addToTheWorld(std::make_unique<Wall>(wall_x * k, wall_y * k, p_GivenTexture));
    }
}

void Wall::doRoutine() {}
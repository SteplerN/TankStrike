#include <deque>
#include <memory>
#include <string>
#include <fstream>

#include <SFML/Graphics.hpp>

#include "Player.hpp"
#include "GameObject.hpp"
#include "Wall.hpp"
#include "World.hpp"
#include "ScreenClass.hpp"

sf::Texture g_SandWallTetxture;

sf::Texture g_PlayerTexture;

int main()
{

    if (!g_SandWallTetxture.loadFromFile("sand_wall_texture.png"))
    {
        throw std::runtime_error("Cannot access this asset!\n");
    }

    if (!g_PlayerTexture.loadFromFile("tank_test_last.png"))
    {
        throw std::runtime_error("Cannot access this asset!\n");
    }

    World Level_1;

    auto player_ptr = std::make_unique<Player>(400.f, 400.f, g_PlayerTexture);
    Player& player_1 = *player_ptr;
    Level_1.addToTheWorld(std::move(player_ptr));

    ScreenClass main_window(sf::VideoMode(900, 900), "main_window");

    Wall::parseTextFileToCreateWalls("wallscoords.txt", Level_1, g_SandWallTetxture);

    while (main_window.isOpen())
    {
        sf::Event current_event;

        while (main_window.pollEvent(current_event))
        {

            if (current_event.type == sf::Event::Closed)
            {
                main_window.close();
            }

        }

        player_1.moveMainCharacterBasesOnArrows(main_window, 1.f, 25.f);

        main_window.clear(sf::Color::Blue);
        main_window.drawTheWorld(Level_1);
        main_window.display();
    }

    return 0;

}
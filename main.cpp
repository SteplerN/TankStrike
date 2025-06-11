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
#include "Universe.hpp"
#include "Core.hpp"
#include "CoreStrategy.hpp"
#include "Globals.hpp"

sf::Texture g_SandWallTetxture;
sf::Texture g_PlayerTexture;

class PlayingLevel_1Strategy : public CoreStrategy
{

    void doTheStrategy()
    {

        for (auto& current_game_object : g_UniverseOfLevel_1.getTheWorld().getTheWorld())
        {
            current_game_object->doRoutine();
        }

        g_MainWindow.drawTheUniverse(g_UniverseOfLevel_1);

    }

};

int main()
{

    Level_1.addToTheWorld(std::move(g_Player_1_Ptr));

    if (!g_SandWallTetxture.loadFromFile("sand_wall_texture.png"))
    {
        throw std::runtime_error("Cannot access this asset!\n");
    }

    if (!g_PlayerTexture.loadFromFile("tank_test_finale.png"))
    {
        throw std::runtime_error("Cannot access this asset!\n");
    }

    Wall::parseTextFileToCreateWalls("wallscoords.txt", Level_1, g_SandWallTetxture);

    while (g_MainWindow.isOpen())
    {
        sf::Event event;

        while (g_MainWindow.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
            {
                g_MainWindow.close();
            }

        }

        g_MainWindow.clear();
        g_MainWindow.drawTheWorld(Level_1);
        g_MainWindow.display();
    }

    return 0;

}
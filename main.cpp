#include "Core.hpp"
#include "World.hpp"
#include "PlayingLevel_1Strategy.hpp"
#include "FileNames.hpp"
#include "ScreenClass.hpp"

ScreenClass& g_ref_MainWindow = g_MainWindow;

int main()
{

    sf::Texture texture_of_blue_tank;
    texture_of_blue_tank.loadFromFile(g_FileWithSandWallTextureForLevel_1);

    World world_of_level_1;
    Universe universe_of_level_1(world_of_level_1);
    Player player_of_level_1(400.f, 400.f, texture_of_blue_tank, universe_of_level_1);
    PlayingLevel_1Strategy playing_level_1_strategy(universe_of_level_1, player_of_level_1, g_MainWindow);

    Core::runTheGame();

    ScreenClass::killAllWindows();

    return 0;

}
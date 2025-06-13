#include "PlayingLevel_1Strategy.hpp"

PlayingLevel_1Strategy::PlayingLevel_1Strategy(Universe& p_Universe, Player& p_Player, ScreenClass& p_Screen) 
    :
    m_Universe(p_Universe), m_Player(p_Player), 
    m_Window(p_Screen) 
    {}

void PlayingLevel_1Strategy::doTheStrategy()
{

    if (!m_Universe.isUniverseLoaded())
    {

    }

    for (auto& current_game_object : m_Universe.getTheWorld().getTheWorld())
    {
        current_game_object->doRoutine();
    }

    sf::Event event;

    while (g_MainWindow.pollEvent(event))
    {

        if (event.type == sf::Event::Closed)
        {
            Core::stopTheGame();
        }

    }

    m_Window.clear();
    m_Window.drawTheUniverse(m_Universe);
    m_Window.display();

}
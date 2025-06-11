#include "Core.hpp"

void Core::runTheGame()
{

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

        m_CurrentStrategy->doTheStrategy();
    }

}

void Core::changeTheStrategy(std::unique_ptr<CoreStrategy> p_GivenStrategy)
{
    m_CurrentStrategy = std::move(p_GivenStrategy);
}
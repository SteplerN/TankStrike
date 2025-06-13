#include "Core.hpp"

void Core::runTheGame()
{
    while (!m_NeedToStop) m_CurrentStrategy.doTheStrategy();
    return;
}

void Core::changeTheStrategy(CoreStrategy& p_GivenStrategy)
{
    m_CurrentStrategy = p_GivenStrategy;
}

void Core::stopTheGame() { 
    m_NeedToStop = true; 
}

bool Core::m_NeedToStop = false;
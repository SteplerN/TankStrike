#pragma once

#include <memory>

#include <SFML/Graphics.hpp>

#include "CoreStrategy.hpp"
#include "PlayingLevel_1Strategy.hpp"

class Core
{

private:

    static CoreStrategy& m_CurrentStrategy;

    static bool m_NeedToStop;

public:

    static void stopTheGame();

    static void runTheGame();

    static void changeTheStrategy(CoreStrategy& p_GivenStrategy);

};
#pragma once

#include <string>

#include "Core.hpp"
#include "CoreStrategy.hpp"
#include "Universe.hpp"
#include "Player.hpp"
#include "ScreenClass.hpp"

class PlayingLevel_1Strategy : public CoreStrategy
{

private:

    Universe& m_Universe;
    Player& m_Player;
    ScreenClass& m_Window;

public:

    PlayingLevel_1Strategy(Universe& p_Universe, Player& p_Player, ScreenClass& p_Screen);

    void doTheStrategy() override;

};
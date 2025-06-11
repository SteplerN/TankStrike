#pragma once

#include <memory>

#include <SFML/Graphics.hpp>

#include "CoreStrategy.hpp"

class Core
{

private:

    std::unique_ptr<CoreStrategy> m_CurrentStrategy;

public:

    void runTheGame();

    void changeTheStrategy(std::unique_ptr<CoreStrategy> p_GivenStrategy);

};
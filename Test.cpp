#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

TEST_CASE("income"){
    Game game_1{};
    Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    for(int i = 0; i < 10 ; i++){
        CHECK_EQ(duke.c,i);
        CHECK_EQ(assassin.c,i);
        CHECK_EQ(ambassador.c,i);
        CHECK_EQ(captain.c,i);
        CHECK_EQ(contessa.c,i);
        duke.income();
        assassin.income();
        ambassador.income();
        captain.income();
        contessa.income();
    }    
}
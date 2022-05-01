#pragma once
#include "Player.hpp"

namespace coup{
    class Duke : public Player{

    public:
        // using Player::Player;
        Duke(/* args */Game &g, std::string n) : Player(g,n){
            // this->r="Duke";
            // this->game = g;
            // g.roles.push_back("Duke");
        }
        // ~Duke();
        void tax();
        void block(Player &p);
    };

}
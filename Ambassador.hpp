#pragma once
#include "Player.hpp"

namespace coup{
    class Ambassador : public Player{
        public:
        // using Player::Player;
        Ambassador(Game &g, std::string n):Player(g,n){
            // this->r="Ambassador";
            // this->game = g;
            // g.roles.push_back("Ambassador");
        }
        // ~Ambassador();
        void transfer(Player &p1, Player &p2);
        void block(Player &p);
    };
}
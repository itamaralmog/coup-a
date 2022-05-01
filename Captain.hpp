#pragma once
#include "Player.hpp"

namespace coup{
    class Captain : public Player
    {
    private:
        /* data */
    public:
        Captain(/* args */Game &g, std::string n):Player(g,n){
            // this->r="Captain";
            // this->game = g;
            // g.roles.push_back("Captain");
        }
        // ~Captain();
        void steal(Player &p);
        void block(Player &p);
    };
    
}
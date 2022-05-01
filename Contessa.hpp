#pragma once
#include "Player.hpp"

namespace coup{
    class Contessa : public Player{
    public:
        Contessa(/* args */Game &g, std::string n):Player(g,n){
            // this->r="Contessa";
            // this->game = g;
            // g.roles.push_back("Contessa");
        }
        // ~Contessa();
        void block(Player &p);
    };
    
    
}
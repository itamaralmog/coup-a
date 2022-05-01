#pragma once
#include "Player.hpp"

namespace coup{
    class Assassin : public Player
    {
    private:
        /* data */
    public:
        Assassin(/* args */ Game &g,std::string n):Player(g,n){
            this->r="Assassin";
            this->game = g;
            g.roles.push_back("Assassin");
        }
        // ~Assassin();
        void coup(Player &p) override;
    };
    
}
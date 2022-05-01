#pragma once

#include "Game.hpp"
#include <string>
#include <vector>
namespace coup
{
    enum moves {No_move,Income,Foreign_aid,Coup,Tax,Transfer,Steal};
    class Player
    {
        public:
        Game game;
        std::string name;
        int c;
        std::string r;
        int move;
        public:
        Player(Game &game, std::string const & name);
        void income();
        void foreign_aid();
        virtual void coup(Player &p);
        virtual std::string role();
        virtual int coins();
        //virtual void block(Player &p);
    };
}
#include "Player.hpp"
using namespace std;
namespace coup
{
    Player::Player(Game &game, string const &name){
        this->game = game;
        game.names.push_back(name);
        this->name = name;
        this->move = No_move;
        this->c=0;
    }
    void Player::income(){
        this->c+=1;
    }
    void Player::foreign_aid(){
        // this->c+=2;
    }
    void Player::coup(Player &p){
        // if(this->c >= 7){
        //     game.adacha.push_back(p.name);
        // }
    }
    std::string Player::role(){
        return this->r;
    }
    int Player::coins(){
        return this->c;
    }
}
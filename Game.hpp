#pragma once
#include <string>
#include <vector>

namespace coup
{
    class Game
    {
        public:
        std::vector<std::string> names;
        std::vector<std::string> roles;
        std::vector<std::string> adacha;
        std::string tt;
        public:
        Game(){ 
            std::vector<std::string> n;
            std::vector<std::string> r;
            std::vector<std::string> ad;
            std::string t;
            this->names=n;
            this->roles=r;
            this->tt=t;   
            this->adacha = ad; 
        }
        std::vector<std::string> players(){
            return this->names;
        }
        std::string turn() const;
        std::string winner(){
            if(this->names.size() == 1){
                return this->names.at(0);
            }
            else{
                throw "game in progress";
            }
        }
    };

}
#include <iostream>
#include "Team.hpp"
#include <string>
using namespace std;

namespace ball{
    class Game{
        public:
        Team *house;
        Team *out;
        int scores;
        string winner;

        Game(){};
        Game(Team *house, Team *out): house(house), out(out){
            scores=0;
            winner="";
        };
    };
};
#include <iostream>
#include <string>
#include <vector>
#include "Team.hpp"
#include "Game.hpp"

using namespace std;
namespace ball{
    class Leauge{
        public:
            Schedule *schedule;
            vector<Team*> _team;
            Leauge(){};
            friend ostream &operator<<(ostream &os, const Leauge &leauge);
    };
};
#include <iostream>
#include <vector>
#include <string>
#include "Game.hpp"
#include "Team.hpp"
using namespace std;
namespace ball{
    class Schedule{
        public:
        vector<Game*> game;
        Schedule(){};
        Schedule(vector<Team *> _team);
        friend ostream &operator<<(ostream &os, const Schedule &schedule);
    };
};
#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace ball{
    class Team{
        public:
        string name;
        double talent_level;
        int win_score=0;
        int loss_score=0;
        Team(string _name, double _talent_level) : name(_name), talent_level(_talent_level){
            loss_score=0;
            win_score=0;
        };

        friend ostream &operator<<(ostream &os, const Team &team);
    };
};
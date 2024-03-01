#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player{
    protected:
        string name;
        char move;
    public:
        virtual char makeMove();
        virtual string getName();
};
#endif

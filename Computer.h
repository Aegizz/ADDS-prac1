#include "Player.h"
#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;
class Computer: public Player{
    public:
        virtual string getName();
        virtual char makeMove();
        Computer();
};
#endif
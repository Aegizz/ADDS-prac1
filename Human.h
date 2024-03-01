#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H


class Human: public Player{
    protected:
    public:
        Human();
        Human(string name);
        virtual char makeMove();
        virtual string getName();

};
#endif
#include "Computer.h"


char Computer::makeMove(){
    return 'R';
}

string Computer::getName(){
    return name;
}

Computer::Computer(){
    name = "Computer";
}
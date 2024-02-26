#include "Human.h"
#include <iostream>
#include <string>
using namespace std;


char Human::makeMove(){
    cin >> move; 
    return move;
}
string Human::getName(){
    return name;
}

Human::Human(string _name){
    name = _name;
}
Human::Human(){
    name = "Human";
}
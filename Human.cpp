#include "Human.h"
#include <iostream>
#include <string>


char Human::makeMove(){
    std::cout << "Enter move: ";
    std::cin >> move; 
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
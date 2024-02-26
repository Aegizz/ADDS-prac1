#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;
Player * Referee::refGame(Player * player1, Player * player2){
    char move1 = 'R';
    char move2 = 'R';
    if (player1->getName() != "Computer"){
        move1 = player1->makeMove();
    }
    if (player2->getName() != "Computer"){
        move2 = player2->makeMove();
    }
    if (move1 == move2){
        cout << "It's a Tie.";
        return NULL;
    }
    if (move1 == 'R' && move2 == 'S'){
        cout << player1->getName() << " wins.";
        return player1;
        
    } else if (move1 == 'S' && move2 == 'R'){
        cout << player1->getName() << " wins.";
        return player1;
        
    } else if (move1 == 'P' && move2 == 'R'){
        cout << player1->getName() << " wins.";
        return player1;
        
    } else {
        cout << player2->getName() << " wins.";
        return player2;
    }

};
Referee::Referee(){

};
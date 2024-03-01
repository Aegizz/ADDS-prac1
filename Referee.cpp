#include "Referee.h"
#include "Player.h"
#include <iostream>
Player * Referee::refGame(Player * player1, Player * player2){
    char move1 = 0;
    char move2 = 0;
    if (player1){
        move1 = player1->makeMove();
    }
    if (player2){
        move2 = player2->makeMove();
    }
    if (move1 == move2){
        std::cout << "It's a Tie.";
        return NULL;
    }
    if (move1 == 'R' && move2 == 'S'){
        std::cout << player1->getName() << " wins.\n";
        return player1;
        
    } else if (move1 == 'S' && move2 == 'P'){
        std::cout << player1->getName() << " wins.\n";
        return player1;
        
    } else if (move1 == 'P' && move2 == 'R'){
        std::cout << player1->getName() << " wins.\n";
        return player1;
        
    } else {
        std::cout << player2->getName() << " wins.\n";
        return player2;
    }

};
Referee::Referee(){

};
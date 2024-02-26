#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"



int main(){
    Referee ref = Referee();
    Player * p1 = new Human();
    Player * p2 = new Human();

    Player * win = new Human();
    ref.refGame(p1, p2);
    return 1;
}
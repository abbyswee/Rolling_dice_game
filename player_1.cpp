//
// Created by Abby Sweet on 4/16/24.
//

#include "player_1.h"
using namespace std;

player_1::player_1(){
    p1Points=0;
    newRoll=1;
}

//getters
int player_1::getP1Points(){
    return p1Points;
}

int player_1::getNewRoll(){
    return newRoll;
}

//setters
void player_1::setP1Points(int p1Points){
    this->p1Points = p1Points;
}
void player_1::setNewRoll(int newRoll){
    this->newRoll=newRoll;
}

int player_1::nextRoll(int p1Points){
    newRoll = r.rollDice(p1Points);
    p1Points = p1Points + newRoll;
    return p1Points;
}
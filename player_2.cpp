//
// Created by Abby Sweet on 4/16/24.
//

#include "player_2.h"

using namespace std;

//constructor
player_2::player_2(){
    p2Points=0;
    newRoll=1;
}
//getters
int player_2::getP2Points(){
    return p2Points;
}
int player_2::getNewRoll(){
    return newRoll;
}

//setters
void player_2::setP2Points(int p2Points){
    this->p2Points = p2Points;
}
void player_2::setNewRoll(int newRoll){
    this->newRoll=newRoll;
}

int player_2::nextRoll(int p2Points){
    newRoll = r.rollDice(p2Points);
    p2Points = p2Points + newRoll;
    return p2Points;
}
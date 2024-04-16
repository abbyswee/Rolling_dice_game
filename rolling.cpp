//
// Created by Abby Sweet on 4/16/24.
//

#include "rolling.h"
#include <cstdlib>
using namespace std;

//constructor
rolling::rolling(){
    currentPoints=0;
    roll=1;
}


// getters
int rolling::getCurrentPoints(){
    return currentPoints;
};
int rolling::getRoll(){
    return roll;
}

//setters
void rolling::setCurrentPoints(int currentPoints){
    this->currentPoints=currentPoints;
}
void rolling::setRoll(int roll){
    this->roll=roll;
}

// actually roll dice
int rolling::rollDice(int currentPoints){
    roll = rand() % maxRoll;
    while (roll==0){
        roll = rand() % maxRoll;
    }
    cout << "you rolled a: " << roll << endl;
    currentPoints += roll;
    return roll;
}
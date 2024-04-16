//
// Created by Abby Sweet on 4/16/24.
//
#include <iostream>
#include "player_1.h"
#include "player_2.h"
#include "rolling.h"
using namespace std;

bool testingPlayer1();
bool testingPlayer2();
bool testingRolling();

int main(){
    if (testingPlayer1()){
        cout << "Player 1 test cases work" << endl;
    }
    if (testingPlayer2()){
        cout << "Player 2 test cases work" << endl;
    }
    if (testingRolling()){
        cout << "Rolling test cases work" << endl;
    }
    return 0;
}

bool testingPlayer1(){
    bool passed=true;
    player_1 p1;
    p1.setP1Points(1);
    if (p1.getP1Points()!=1){
        passed=false;
        cout << "failed getting p1 points" << endl;
    }
    p1.setNewRoll(1);
    if (p1.getNewRoll()!=1){
        passed=false;
        cout << "failed getting p1 new roll " <<  endl;
    }
    player_1 p2;
    if (p2.getP1Points()!=0){
        passed=false;
        cout << "failed getting p1 points using constuctor" << endl;
    }
    if (p2.getNewRoll()!=1){
        passed=false;
        cout << "failed getting p1 new roll in this" << endl;
    }
    return passed;
}

bool testingPlayer2(){
    bool passed=true;
    player_2 p2;
    p2.setP2Points(2);
    if (p2.getP2Points()!=2){
        passed=false;
        cout << "failed getting p2 points" << endl;
    }
    p2.setNewRoll(3);
    if (p2.getNewRoll()!=3){
        passed=false;
        cout << "failed getting p2 new roll" << endl;
    }
    player_2 p3;
    if (p3.getP2Points()!=0){
        passed=false;
        cout << "failed getting p2 points using constuctor" << endl;
    }
    if (p3.getNewRoll()!=1){
        passed=false;
        cout << "failed getting p2 new roll" << endl;
    }
    return passed;
}

bool testingRolling(){
    bool passed=true;
    rolling r;
    r.setCurrentPoints(1);
    if (r.getCurrentPoints()!=1){
        passed=false;
        cout << "failed getting rolling current points" << endl;
    }
    r.setRoll(1);
    if (r.getRoll()!=1){
        passed=false;
        cout << "failed getting rolling roll " <<  endl;
    }
    rolling r2;
    if (r2.getCurrentPoints()!=0){
        passed=false;
        cout << "failed getting rolling using constuctor" << endl;
    }
    if (r2.getRoll()!=1){
        passed=false;
        cout << "failed getting rolling new roll" << endl;
    }
    return passed;
}
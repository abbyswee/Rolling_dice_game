//
// Created by Abby Sweet on 4/16/24.
//

#ifndef PUBLICREPO_PLAYER_1_H
#define PUBLICREPO_PLAYER_1_H

#include "rolling.h"

using std::istream;

class player_1 {
protected:
    rolling r;
    int p1Points;
    int newRoll;
public:
    //constuctor
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: nothing
     */
    player_1();

    //getters
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the points player 1 has
     */
    int getP1Points();
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns new roll value
     */
    int getNewRoll();

    //setters
    /**
     * Requires: player 1 points
     * Modifies: player 1 points
     * Effects: sets the player 1 points
     */
    void setP1Points(int p1Points);
    /**
     * Requires: new roll
     * Modifies: new roll
     * Effects: sets the new roll
     */
    void setNewRoll(int newRoll);

    /**
     * Requires: player 1 points
     * Modifies: new roll and player 1 points
     * Effects: changes and returns new roll and sets player 1 points
     */
    int nextRoll(int p1Points);
};


#endif //PUBLICREPO_PLAYER_1_H

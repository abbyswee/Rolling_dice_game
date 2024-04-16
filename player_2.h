//
// Created by Abby Sweet on 4/16/24.
//

#ifndef PUBLICREPO_PLAYER_2_H
#define PUBLICREPO_PLAYER_2_H

#include "rolling.h"
#include <optional>
using std::istream;

class player_2 {
protected:
    rolling r;
    int p2Points;
    int newRoll;
public:
    //constuctor
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: nothing
     */
    player_2();

    //getters
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the points player 2 has
     */
    int getP2Points();
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns new roll value
     */
    int getNewRoll();

    //setters
    /**
     * Requires: player 2 points
     * Modifies: player 2 points
     * Effects: sets the player 2 points
     */
    void setP2Points(int p2Points);
    /**
     * Requires: new roll
     * Modifies: new roll
     * Effects: sets the new roll
     */
    void setNewRoll(int newRoll);

    /**
     * Requires: player 2 points
     * Modifies: new roll and player 2 points
     * Effects: changes and returns new roll and sets player 2 points
     */
    int nextRoll(int p2Points);
};

#endif //PUBLICREPO_PLAYER_2_H

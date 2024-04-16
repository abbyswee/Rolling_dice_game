//
// Created by Abby Sweet on 4/16/24.
//

#ifndef PUBLICREPO_ROLLING_H
#define PUBLICREPO_ROLLING_H

#include <iostream>


class rolling {
    //initialize
protected:
    int currentPoints;
    int const maxRoll=7;
    int roll;
public:
    //constructor
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: nothing
     */
    rolling();

    // getters
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the current points
     */
    int getCurrentPoints();
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the roll value
     */
    int getRoll();

    //setters
    /**
     * Requires: current points
     * Modifies: cureent points
     * Effects: sets the current points
     */
    void setCurrentPoints(int currentPoints);
    /**
     * Requires: roll value
     * Modifies: roll value
     * Effects: sets new roll value
     */
    void setRoll(int roll);

    // actually roll dice
    /**
     * Requires: current points
     * Modifies: modifies current points
     * Effects: gets the roll value
     */
    int rollDice(int currentPoints);
};
#endif //PUBLICREPO_ROLLING_H

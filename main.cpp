//
// Created by Abby Sweet on 4/16/24.
//
#include <iostream>
#include <fstream>
#include "player_1.h"
#include "player_2.h"
using namespace std;

int main(){
    // do you want to play
    cout << "do you want to play? choose a or b" << endl;
    int choices =2;
    string playing;
    cout << "a: YES!" << endl;
    cout << "b: no, get me out of here" << endl;
    cout << "Your answer: ";
    getline(cin, playing);

    // Input validation
    while (playing.size() != 1 || tolower(playing[0]) < 'a' || tolower(playing[0]) >= ('a' + choices)) {
        cout << "Invalid input. Try again: " <<endl;
        getline(cin, playing);
    }

    // while they want to play then go into this in not exit
    while (playing == "a"){
        cout << "do you have 2 players? Choose a or b." << endl;
        int playerNumber =2;
        string input;
        cout << "a: YES!" << endl;
        cout << "b: no, whoops" << endl;
        cout << "Your answer: ";
        getline(cin, input);

        // if they don't have two people get them out of the loop
        if (input == "b"){
            playing = "b";
        }

        // Input validation
        while (input.size() != 1 || tolower(input[0]) < 'a' || tolower(input[0]) >= ('a' + playerNumber)) {
            cout << "Invalid input. Try again: " <<endl;
            getline(cin, input);

            // if they don't have two people get them out of the loop
            if (input == "b"){
                playing = "b";
            }
        }

        //Both requirements satisfied, play the dice game
        if (playing == "a"){
            // set points and to player classes
            player_1 p1;
            int p1points = 0;
            player_2 p2;
            int p2points = 0;
            int winningPoints = 100;

            //start playing the game
            cout << "Hello this is a game of rolling dice to get to 100" << endl;
            //loop until one player gets over 100
            while (p1points < winningPoints && p2points < winningPoints){
                p1points = p1.nextRoll(p1points);
                cout << "Player 1 has " << p1points << " points" << endl;
                p2points = p2.nextRoll(p2points);
                cout << "Player 2 has " << p2points << " points" << endl;
            }

            //print to outfile
            fstream outFile("../Winners.txt");
            // if statements for the outfile
            if (p1points>p2points){
                cout << "The winner is Player 1 with " << p1points << " points, beating Player 2's "<< p2points << " points " << endl;
                outFile << "The winner of Dice is Player 1 with: " << p1points;
            }
            else if (p1points<p2points){
                cout << "The winner is Player 2 with " << p2points << " points, beating Player 1's "<< p1points << " points " << endl;
                outFile << "The winner of Dice is Player 2 with: " << p2points;
            }
            else {
                cout << "they are equal!! no winner!!" << endl;
                outFile << "There is no winner! it's a tie!";
            }

            // add extra line and close the file
            outFile << endl;
            outFile.close();

            //ask if they want to play again, playing and choices already initialized
            cout << "Do you want to play again?" << endl;
            cout << "a: YES!" << endl;
            cout << "b: no, get me out of here" << endl;
            cout << "Your answer: ";
            getline(cin, playing);

            // Input validation
            while (playing.size() != 1 || tolower(playing[0]) < 'a' || tolower(playing[0]) >= ('a' + choices)) {
                cout << "Invalid input. Try again: " <<endl;
                getline(cin, playing);
                if (input == "b"){
                    playing = "b";
                }
            }
        }

    }
    return 0;
};
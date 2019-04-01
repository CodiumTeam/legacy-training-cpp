#ifndef TENNIS_REFACTORING_KATA_TENNIS_H
#define TENNIS_REFACTORING_KATA_TENNIS_H

#include <string>

using namespace std;

class Tennis {
private:
    string player1Name;
    string player2Name;
    int score1;
    int score2;
public:
    Tennis(string aPlayer1Name, string aPlayer2Name);
    string score(int p1Score, int p2Score);
};

#endif

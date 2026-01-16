#include "gamenew.h"
#include <iostream>
using namespace std;

GameNew::GameNew(int mN)
{
    cout << "Peli luotu" << endl;
    maxNumber = mN;
}


GameNew::~GameNew()
{
    cout << "peli tuhottu" << endl;
}

void GameNew:: play()
{
    srand(time(NULL));
    randomNumber = (rand() % maxNumber) + 1;
    //cout << "Satunnais luku on " << randomNumber <<  " maxnum on: " << maxNumber << endl; DEBUGGI
    cout << " Max num on: " << maxNumber << endl;

    while (playerGuess != randomNumber){

        cout << "Anna arvaus: " << endl;
        cin >> playerGuess;
        //  cout << "Pelaajan arvaus on " << arvaus << endl;
        numOfGuesses++;

        if(playerGuess == randomNumber) {
            cout << "Oikein! " << endl;
            //cout << "Arvausten lukumaara on: " << arvausten_lkm << endl;
        }
        else if (playerGuess < randomNumber){
            cout << "Luku on suurempi! " << endl;
        }
        else if (playerGuess > randomNumber){
            cout << "Luku on pienempi! " << endl;
        }
    }
}



void GameNew::printGameResult()
{
    //cout << "tulostuksessa" << endl;
    cout << "oikea luku: " << randomNumber << endl;
    cout << "Number of guesses: " << numOfGuesses << endl;
}

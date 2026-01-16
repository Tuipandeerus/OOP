#ifndef GAMENEW_H
#define GAMENEW_H

class GameNew
{
public:
    GameNew(int);   //konstruktori
    ~GameNew();     //destruktori
    void play();    //tähän toteutetaan pelin algoritmit
    void printGameResult();
private:
    int maxNumber = 20;  //suurin arvottava luku
    int playerGuess;    //pelaajan arvaus
    int randomNumber = 0;   //tähän tallennetaan satunnaisluku
    int numOfGuesses = 0;   //arvausten lukumäärä
   // void printGameResult(); //tulostaa oikean luvun ja pelaajan arvauksien määrän
protected:

};

#endif // GAMENEW_H

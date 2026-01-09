#include <iostream>
#include <ctime>


using namespace std;

int game(int maxnum);

int main()
{
    int lkm = game(50);
    cout << "Arvausten lukumaara on: " << lkm << endl;
    /*
    int arvaus = 0;
    int arvausten_lkm = 0;
    srand(time(NULL));
    int satunnaisluku = (rand() % 20) + 1;
   // cout << "Satunnais luku on " << satunnaisluku << endl;

    while (arvaus != satunnaisluku){

        cout << "Anna arvaus: " << endl;
        cin >> arvaus;
        //  cout << "Pelaajan arvaus on " << arvaus << endl;
        arvausten_lkm++;

        if(arvaus == satunnaisluku) {
            cout << "Oikein! " << endl;
            cout << "Arvausten lukumaara on: " << arvausten_lkm << endl;
        }
        else if (arvaus < satunnaisluku){
                cout << "Luku on suurempi! " << endl;
        }
        else if (arvaus > satunnaisluku){
            cout << "Luku on pienempi! " << endl;
        }


    }
    return 0;
*/
}


int game(int maxnum) {

    int arvaus = 0;
    int arvausten_lkm = 0;
    srand(time(NULL));
    int satunnaisluku = (rand() % maxnum) + 1;
    cout << "Satunnais luku on " << satunnaisluku << " maxnum on: " << maxnum << endl;

    while (arvaus != satunnaisluku){

        cout << "Anna arvaus: " << endl;
        cin >> arvaus;
        //  cout << "Pelaajan arvaus on " << arvaus << endl;
        arvausten_lkm++;

        if(arvaus == satunnaisluku) {
            cout << "Oikein! " << endl;
            //cout << "Arvausten lukumaara on: " << arvausten_lkm << endl;
        }
        else if (arvaus < satunnaisluku){
            cout << "Luku on suurempi! " << endl;
        }
        else if (arvaus > satunnaisluku){
            cout << "Luku on pienempi! " << endl;
        }
    }

    return arvausten_lkm;
}

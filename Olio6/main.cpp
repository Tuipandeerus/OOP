#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    vector<Student>::iterator it = studentList.begin();
    string nimi;
    int ika;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            //cout << "DEBUG: case 0, lisätään opiskelija" << endl;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Enter student's name: " << endl;
            cin>>nimi;
            cout << "Enter student's age: " << endl;
            cin>>ika;
            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(nimi,ika);
            cout << "Lisättiin: " << nimi << " " << ika << "v" << endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            //cout << "DEBUG: case 1, tulostetaan lista." << endl;
            for (auto &s: studentList){
                cout << s.getName() <<  endl;
            }
            break;

        case 2:
            //cout << "DEBUG: case 2" << endl;
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                return a.getName() < b.getName();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            for (auto &s: studentList){
                s.printStudentInfo();
            }
            break;

        case 3:
            //cout << "DEBUG: case 3, tulosta järjestetyt opiskelijat" << endl;
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                return a.getAge() < b.getAge();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            for (auto &s: studentList){
                s.printStudentInfo();
            }
            break;
        case 4:
            //cout << "DEBUG: case 4, find_if ja printStudentInfo" << endl;
            // Kysy käyttäjältä opiskelijan nimi
            cout << "Enter student's name:" << endl;
            cin >> nimi;
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            it = find_if(studentList.begin(), studentList.end(), [nimi](Student &a){
                return a.getName() == nimi;
            });

            if(it != studentList.end()){
                it->printStudentInfo();
            }
            else{
                cout << "Not found" << endl;
            }

            break;
        default:
            //cout << "DEBUG: default" << endl;
            cout << "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}

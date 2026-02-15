#include "student.h"
#include <iostream>

Student::Student()
{
    //cout << "DEBUG: Default konstruktori" << endl;
}

Student::Student(string a, int b)
{
    //cout << "DEBUG: Konstruktori käyttää parametrejä: " << a << " ja " << b << endl;
    name = a;
    age = b;
}

void Student::setAge(int a)
{
    //cout << "DEBUG: setAge()" << endl;
    age = a;
}

void Student::setName(string n)
{
    //cout << "DEBUG: setName()" << endl;
    name = n;
}

string Student::getName()
{
    //cout << "DEBUG: getName()" << endl;
    return name;
}

int Student::getAge()
{
    //cout << "DEBUG: getAge()" << endl;
    return age;
}

void Student::printStudentInfo()
{
    //cout << "DEBUG: printStudentInfo()" << endl;
    cout << "Name: " << name << " Age: " << age << endl;
}

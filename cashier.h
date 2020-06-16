#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "person.h"
using namespace std;
class cashier :
    public person
{
private:
    int id;
    int counterno;
public:
    cashier() {}
    cashier(string n, int p, int i, int cn) :person(n, p) { id = i;counterno = cn; }
    void display() {
        cout << "Cashier's Info: " << endl;
        person::display();
        cout << " ,Id: " << id << " ,Counter: " << counterno;
    }
};


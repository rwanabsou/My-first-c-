#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "person.h"
class customer :
    public person
{
private:
    float paid;
    float charge;
    int cardno;
    int bouns;
public:
    float bonu;
    customer() {}
    customer(string n, int p, float pai, float can) :person(n, p) { paid = pai; cardno = can; }

    void display() {
        cout << "Customer's Data: " << endl;
        person::display();
        cout << "Paid amount: " << paid << " ,Card Number: " << cardno << endl;
    }
};


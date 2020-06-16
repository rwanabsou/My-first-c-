#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class person
{
private:

	string name;
	int phone;
public:
	person() {}
	person(string n,int p):name(n),phone(p) {}
	virtual void display() {
		cout << "Name: " << name << " ,Phone: " << phone;
	}
};


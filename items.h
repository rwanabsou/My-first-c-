#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class items
{
private:
	string name;
	int countity;
	float price;
public:
	items() {}
	items(string n,int c, float p) :name(n),countity(c), price(p){}
	int get_Quantity() {
		return countity;
	}
	float it = countity * price;
	float get_it() { return it; }
	float get_price() { return price; }
	string get_product() { return name; }
};


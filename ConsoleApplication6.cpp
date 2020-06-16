#include <iostream>
#include <string>
#include <vector>
#include "items.h"
#include "cashier.h"
#include "customer.h"
using namespace std;
float t = 0;
string name;
int phone;
float paid;
int cardno;
//ending cust
string type;
int k;
bool add=true;
char y;
float p;
void cust() {
	
	cout << "Please Enter the Customer's name: " << endl;
	cin >> name;
	cout << "Please Enter the Coustomer's phone: " << endl;
	cin >> phone;
	cout << "Please Enter the Paid amount " << endl;
	cin >> paid;
	cout << "Please Enter the Coustmer's card number " << endl;
	cin >> cardno;

}
void survey() {
	cout << "Please Enter the Product's name: " << endl;
	cin >> type;
	cout << "Please Enter the quantity: " << endl;
	cin >> k;
	cout << "Please Enter the price: " << endl;
	cin >> p;
	cout << "add another item ? Yes=y,No=n" << endl;
	cin >> y;
}
int main()
{
	vector<items>it;
	while (add)
	{
		survey();
		if (y!='y')
		{
			add = false;
		}
		items item(type,k, p);
		it.push_back(item);
	}
	for (int i = 0; i < it.size(); i++)
	{
		t+=it[i].get_price()*it[i].get_Quantity();
	}
	
	cout << "Coustmer's data:" << endl;
	cust();
	customer cust(name, phone, paid, cardno);
	cout << "Welcome To our Shop" << endl;
	cout << "*********Recipt***********" << endl;
	cashier c1("Mohamed Khaled ",1201211825,156,3);
	c1.display();
	cust.display();
	cout << "****Items*****" << endl;
	for (int i = 0; i < it.size(); i++)
	{
		cout << "Product: " << it[i].get_product() << " ,Quantity: " << it[i].get_Quantity() << " ,Price: " << it[i].get_price()<<" ,Total items price: "<<it[i].get_it()<< endl;
	}
	cout << "Total price : " << t << " ,Paid: " <<paid << endl<<"Charge: "<<paid-t<<endl<<"THANK YOU FOR VISITING US";
}
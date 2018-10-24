#include <iostream>
#include "Person.h"

int main() {
	cout << "Testing constructors put/getters: " << endl;
	cout << "-------------------------" << endl;

	cout << "Person p;" << endl;
	Person p;

	cout << "p.setLastName(\"Doe\");" << endl;
	p.setLastName("Doe");
	cout <<"p.getLastName()" << endl
	cout << p.getLastName() << endl;

	cout << "p.setAddress(\"321 Lane Road\");" << endl;
	p.setAddress("321 Lane Road");
	cout << "p.getAddress()" << endl;
	cout << p.getAddress() << endl;

	cout << "Testing overwrite: " << endl;
	cout << "-------------------------" << endl;


	cout << "Testing copy constructor: " << endl;
	cout << "-------------------------" << endl;

	cout << "Person p1(p);" << endl;
	Person p1(p);

	cout << "Testing detailed constructor: " << endl;
	cout << "-------------------------" << endl;

	cout << "Person p2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890);" << endl;
	Person p2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890);


}

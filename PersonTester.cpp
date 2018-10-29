#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
	cout << "----------PERSON----------" << endl;
	
	cout << "Testing constructors put/getters: " << endl;
	cout << "-------------------------" << endl;

	cout << "Person p;" << endl;
	Person p;
	
	cout << "p.setURID(12341234);" << endl;
	p.setURID(12341234);
	cout << "URID: " << p.getURID() << " [12341234]" << endl;
	
	cout << "p.setNetID(\"jd2jd\");" << endl;
	p.setNetID("jd2jd");
	cout << "NetID: " << p.getNetID() << " [jd2jd]" << endl;

	cout << "p.setFirstName(\"John\");" << endl;
	p.setFirstName("John");
	cout << "First Name: " << p.getFirstName() << " [John]" << endl;
	
	cout << "p.setLastName(\"Doe\");" << endl;
	p.setLastName("Doe");
	cout << "Last Name: " << p.getLastName() << " [Doe]" << endl;

	cout << "p.setAddress(\"321 Lane Road\");" << endl;
	p.setAddress("321 Lane Road");
	cout << "Address: " << p.getAddress() << " [321 Lane Road]" << endl;
	
	cout << "p.setDateOfBirth(12, 25, 1990);" << endl;
	p.setDateOfBirth(12, 25, 1990);
	cout << "DateOfBirth: " << p.getDateOfBirth() << " []" << endl;
	
	cout << "p.setPhone(2014822829);" << endl;
	p.setPhone(2014822829);
	cout <<"p.getPhone()" << endl;
	cout << p.getPhone() << endl;

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

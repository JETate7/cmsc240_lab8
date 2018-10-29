#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

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
	
	cout << "p.setDateOfBirth(25, 0, 1990);" << endl;
	p.setDateOfBirth(25, 0, 1990);
	cout << "DateOfBirth (day): " << p.getDateOfBirth().tm_mday << " [25]" << endl;
	cout << "DateOfBirth (month): " << p.getDateOfBirth().tm_mon <<  " [1] " << endl;
	cout << "DateOfBirth (year): " << p.getDateOfBirth().tm_year << " [90] " <<endl;

	cout << "p.setPhone(2014822829);" << endl;
	p.setPhone(2014822829);
	cout <<"p.getPhone()" << endl;
	cout << p.getPhone() << endl;

	cout << "-------------------------" << endl;
	cout << "Testing copy constructor: " << endl;
	cout << "-------------------------" << endl;
	
	cout << "Person p1(p);" << endl;
	Person p1(p);

	cout << "Testing getters on p1: " << endl;

	cout << "URID: " << p1.getURID() << " [12341234]" << endl;

        cout << "NetID: " << p1.getNetID() << " [jd2jd]" << endl;

        cout << "First Name: " << p1.getFirstName() << " [John]" << endl;

        cout << "Last Name: " << p1.getLastName() << " [Doe]" << endl;

        cout << "Address: " << p1.getAddress() << " [321 Lane Road]" << endl;

        cout << "DateOfBirth (day): " << p1.getDateOfBirth().tm_mday << " [25]" << endl;
        cout << "DateOfBirth (month): " << p1.getDateOfBirth().tm_mon << " [11] " << endl;
        cout << "DateOfBirth (year): " << p1.getDateOfBirth().tm_year << " [90] " <<endl;

        cout <<"p1.getPhone()" << endl;
        cout << p1.getPhone() << endl;

        cout << "-------------------------" << endl;
        cout << "Testing overwrite: " << endl;
        cout << "-------------------------" << endl;


	cout << "p.setURID(56781234);" << endl;
        p.setURID(56781234);
        cout << "URID: " << p.getURID() << " [56781234]" << endl;

        cout << "p.setNetID(\"ab2ab\");" << endl;
        p.setNetID("ab2ab");
        cout << "NetID: " << p.getNetID() << " [ab2ab]" << endl;

        cout << "p.setFirstName(\"John2\");" << endl;
        p.setFirstName("John2");
        cout << "First Name: " << p.getFirstName() << " [John2]" << endl;

        cout << "p.setLastName(\"Doe2\");" << endl;
        p.setLastName("Doe2");
        cout << "Last Name: " << p.getLastName() << " [Doe2]" << endl;

        cout << "p.setAddress(\"123 Road Ave\");" << endl;
        p.setAddress("123 Road Ave");
        cout << "Address: " << p.getAddress() << " [123 Road Ave]" << endl;

        cout << "p.setDateOfBirth(20, 9, 1993);" << endl;
        p.setDateOfBirth(25, 12, 1990);
        cout << "DateOfBirth (day): " << p.getDateOfBirth().tm_mday << " [20]" << endl;
        cout << "DateOfBirth (month): " << p.getDateOfBirth().tm_mon <<  " [8] " << endl;
        cout << "DateOfBirth (year): " << p.getDateOfBirth().tm_year << " [93] " <<endl;

        cout << "p.setPhone(213434534);" << endl;
        p.setPhone(213434534);
        cout <<"p.getPhone()" << endl;

	cout << "-------------------------" << endl;
	cout << "Testing detailed constructor: " << endl;
	cout << "-------------------------" << endl;

	cout << "Person p2(11111111, \"ab1cd\", \"last\", \"first\", 31, 10, 2018, \"abcd@richmond.edu\", \"123 happy lane\", 1234567890);" << endl;
	Person p2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890);

	cout << "Testing getters on p2: " << endl;

        cout << "URID: " << p2.getURID() << " [11111111]" << endl;

        cout << "NetID: " << p2.getNetID() << " [ab1cd]" << endl;

        cout << "First Name: " << p2.getFirstName() << " [first]" << endl;

        cout << "Last Name: " << p2.getLastName() << " [last]" << endl;

        cout << "Address: " << p2.getAddress() << " [123 happy lane]" << endl;

        cout << "DateOfBirth (day): " << p2.getDateOfBirth().tm_mday << " [31]" << endl;
        cout << "DateOfBirth (month): " << p2.getDateOfBirth().tm_mon << " [9] " << endl;
        cout << "DateOfBirth (year): " << p2.getDateOfBirth().tm_year << " [118] " <<endl;
	cout << "Email: " << p2.getEmail() << " [abcd@richmond.edu]" << endl;

        cout <<"p2.getPhone()" << endl;
        cout << p2.getPhone() << endl;


	return 0;
}

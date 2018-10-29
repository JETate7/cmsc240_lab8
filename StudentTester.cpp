#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
	cout << "----------STUDENT----------" << endl;
	
	cout << "Testing constructors put/getters: " << endl;
	cout << "-------------------------" << endl;

	cout << "Student s;" << endl;
	Student s;
	
	cout << "s.setURID(12341234);" << endl;
	s.setURID(12341234);
	cout <<"s.getURID()" << endl;
	cout << s.getURID() << endl;
	
	cout << "s.setNetID(\"jd2jd\");" << endl;
	s.setFirstName("jd2jd");
	cout <<"s.getNetID()" << endl;
	cout << s.getNetID() << endl;

	cout << "s.setFirstName(\"John\");" << endl;
	s.setFirstName("John");
	cout <<"s.getFirstName()" << endl;
	cout << s.getFirstName() << endl;
	
	cout << "s.setLastName(\"Doe\");" << endl;
	s.setLastName("Doe");
	cout <<"s.getLastName()" << endl;
	cout << s.getLastName() << endl;

	cout << "s.setAddress(\"321 Lane Road\");" << endl;
	s.setAddress("321 Lane Road");
	cout << "s.getAddress()" << endl;
	cout << s.getAddress() << endl;
	
	cout << "s.setDateOfBirth(12, 25, 1990);" << endl;
	s.setFirstName(12, 25, 1990);
	cout <<"s.getDateOfBirth()" << endl;
	cout << s.getDateOfBirth() << endl;
	
	cout << "s.setPhone(2014822829);" << endl;
	s.setFirstName(2014822829);
	cout <<"s.getPhone()" << endl;
	cout << s.getPhone() << endl;
  
  
  cout << "Testing Course methods: " << endl;
	cout << "-------------------------" << endl;
  
  

	cout << "Testing overwrite: " << endl;
	cout << "-------------------------" << endl;

	cout << "Testing copy constructor: " << endl;
	cout << "-------------------------" << endl;
	
	cout << "Student s1(s);" << endl;
	Student s1(s);
  
  

	cout << "Testing detailed constructor: " << endl;
	cout << "-------------------------" << endl;

	cout << "Student s2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890);" << endl;
	Student s2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890);
}

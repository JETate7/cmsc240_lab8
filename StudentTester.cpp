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
	s.setNetID("jd2jd");
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
	s.setDateOfBirth(12, 25, 1990);
	cout <<"s.getDateOfBirth()" << endl;
	cout << s.getDateOfBirth() << endl;
	
	cout << "s.setPhone(2014822829);" << endl;
	s.setPhone(2014822829);
	cout <<"s.getPhone()" << endl;
	cout << s.getPhone() << endl;
  
	cout << "
 
  	cout << "Testing Course methods: " << endl;
	cout << "-------------------------" << endl;
  
  	cout << "s.addCourse(\"Math\");" << endl;
	cout << "s.addCourse(\"Biology\");" << endl;
	cout << "s.addCourse(\"Spanish\");" << endl;
	s.addCourse("Math");
	s.addCourse("Biology");
	s.addCourse("Spanish");
	
	cout << "s.printCourses();" << endl;
	cout << s.printCourses() << endl;
	
	cout << "s.removeCourse(\"Spanish\");" << endl;
	s.removeCourse("Spanish");
	
	cout << "s.getCourses();" << endl;
	cout << s.getCourses() << endl;
	
	cout << "s.clearCourses();" << endl;
	s.clearCourses();
	
	cout << "Setting courses from a new course list and printing" << endl;
	std::list<std::string> newCourses({"French", "Chemistry"});
	cout <<"s.setCourses(newCourses);" << endl;
	s.setCourses(newCourses);
	cout << s.printCourses() << endl;

	cout << "Testing overwrite: " << endl;
	cout << "-------------------------" << endl;

	cout << "Testing copy constructor: " << endl;
	cout << "-------------------------" << endl;
	
	cout << "Student s1(s);" << endl;
	Student s1(s);

	cout << "Testing detailed constructor: " << endl;
	cout << "-------------------------" << endl;

	cout << "Student s2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890, 15, 8, 2015, LAW, true, 10.5, 3.45, {"Math", "Art"});" << endl;
	Student s2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890, 15, 8, 2015, LAW, true, 10.5, 3.45, {"Math", "Art"});
}

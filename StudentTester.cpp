#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main() {
	cout << "----------STUDENT----------" << endl;
	
	cout << "Testing constructors put/getters: " << endl;
	cout << "-------------------------" << endl;

	cout << "Student s;" << endl;
	Student s;
	
	cout << "s.setURID(12341234);" << endl;
	s.setURID(12341234);
	cout << "URID: " << s.getURID() << " [12341234]" << endl;
	
	cout << "s.setNetID(\"jd2jd\");" << endl;
	s.setNetID("jd2jd");
	cout << "NetID: " << s.getNetID() << " [jd2jd]" << endl;

	cout << "s.setFirstName(\"John\");" << endl;
	s.setFirstName("John");
	cout << "First Name: " << s.getFirstName() << " [John]" << endl;
	
	cout << "s.setLastName(\"Doe\");" << endl;
	s.setLastName("Doe");
	cout << "Last Name: " << s.getLastName() << " [Doe]" << endl;

	cout << "s.setAddress(\"321 Lane Road\");" << endl;
	s.setAddress("321 Lane Road");
	cout << "Address: " << s.getAddress() << " [321 Lane Road]" << endl;
	
	cout << "s.setDateOfBirth(25, 12, 1990);" << endl;
	s.setDateOfBirth(25, 12, 1990);
	cout << "DateOfBirth (day): " << s.getDateOfBirth().tm_mday << " [25]" << endl;
	cout << "DateOfBirth (month): " << s.getDateOfBirth().tm_mon <<  " [11] " << endl;
	cout << "DateOfBirth (year): " << s.getDateOfBirth().tm_year << " [90] " <<endl;

	cout << "s.setPhone(2014822829);" << endl;
	s.setPhone(2014822829);
	cout <<"s.getPhone()" << endl;
	cout << s.getPhone() << endl;
	
	cout << "s.setAdmitDate(8, 5, 2016);" << endl;
	s.setAdmitDate(8, 5, 2016);
	cout << "Admit Date (day): " << s.getAdmitDate().tm_mday << " [8]" << endl;
	cout << "Admit Date (month): " << s.getAdmitDate().tm_mon << " [4]" << endl;
	cout << "Admit Date (year): " << s.getAdmitDate().tm_year << " [116]" << endl;
 
	cout << "s.setSchool(Student::LAW);" << endl;
	s.setSchool(Student::LAW);
	cout << "School: " << s.getSchool() << " []" << endl;
	
	cout << "s.setGPA(3.21);" << endl;
	s.setGPA(3.21);
	cout << "GPA: " << s.getGPA() << " [3.21]" << endl;
	
	cout << "s.setUnitsCompleted(8.0);" << endl;
	s.setUnitsCompleted(8.0);
	cout << "Completed Units: " << s.getUnitsCompleted() << " [8.0]" << endl;
	
	cout << "s.setFullTimeStatus(false);" << endl;
	s.setFullTimeStatus(false);
	cout << "Full Time Status: " << s.getFullTimeStatus() << " [false]" << endl;
	
  	cout << "Testing Course methods: " << endl;
	cout << "-------------------------" << endl;
  
  	cout << "s.addCourse(\"Math\");" << endl;
	cout << "s.addCourse(\"Biology\");" << endl;
	cout << "s.addCourse(\"Spanish\");" << endl;
	s.addCourse("Math");
	s.addCourse("Biology");
	s.addCourse("Spanish");
	
	cout << "s.printCourses();" << endl;
	s.printCourses();
	
	cout << "s.removeCourse(\"Spanish\");" << endl;
	s.removeCourse("Spanish");
	
	cout << "s.clearCourses();" << endl;
	s.clearCourses();
	
	cout << "Setting courses from a new course list and printing" << endl;
	std::list<std::string> newCourses({"French", "Chemistry"});
	cout <<"s.setCourses(newCourses);" << endl;
	s.setCourses(newCourses);
	cout << s.printCourses() << endl;

	cout << "Testing overwrite: " << endl;
	cout << "-------------------------" << endl;

        cout << "-------------------------" << endl;
	cout << "Testing copy constructor: " << endl;
	cout << "-------------------------" << endl;
	
	cout << "Student s1(s);" << endl;
	Student s1(s);

	cout << "Testing getters on s1: " << endl;

	cout << "URID: " << s1.getURID() << " [12341234]" << endl;

        cout << "NetID: " << s1.getNetID() << " [jd2jd]" << endl;

        cout << "First Name: " << s1.getFirstName() << " [John]" << endl;

        cout << "Last Name: " << s1.getLastName() << " [Doe]" << endl;

        cout << "Address: " << s1.getAddress() << " [321 Lane Road]" << endl;

        cout << "DateOfBirth (day): " << s1.getDateOfBirth().tm_mday << " [25]" << endl;
        cout << "DateOfBirth (month): " << s1.getDateOfBirth().tm_mon << " [11] " << endl;
        cout << "DateOfBirth (year): " << s1.getDateOfBirth().tm_year << " [90] " <<endl;

        cout <<"s1.getPhone()" << endl;
        cout << s1.getPhone() << endl;
	
	cout << "Admit Date (day): " << s1.getAdmitDate().tm_mday << " [8]" << endl;
	cout << "Admit Date (month): " << s1.getAdmitDate().tm_mon << " [4]" << endl;
	cout << "Admit Date (year): " << s1.getAdmitDate().tm_year << " [116]" << endl;
	
	cout << "School: " << s1.getSchool() << " []" << endl;

	cout << "GPA: " << s1.getGPA() << " [3.21]" << endl;

	cout << "Completed Units: " << s1.getUnitsCompleted() << " [8.0]" << endl;

	cout << "Full Time Status: " << s1.getFullTimeStatus() << " [false]" << endl;

	cout << "-------------------------" << endl;
	cout << "Testing detailed constructor: " << endl;
	cout << "-------------------------" << endl;

	cout << "Student s2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890, 15, 8, 2015, Student::LAW, true, 10.5, 3.45, {"Math", "Art"});" << endl;
	Student s2(11111111, "ab1cd", "last", "first", 31, 10, 2018, "abcd@richmond.edu", "123 happy lane", 1234567890, 15, 8, 2015, Student::LAW, true, 10.5, 3.45, {"Math", "Art"});
	
	cout << "Testing getters on s2: " << endl;

        cout << "URID: " << s2.getURID() << " [11111111]" << endl;

        cout << "NetID: " << s2.getNetID() << " [ab1cd]" << endl;

        cout << "First Name: " << s2.getFirstName() << " [first]" << endl;

        cout << "Last Name: " << s2.getLastName() << " [last]" << endl;

        cout << "Address: " << s2.getAddress() << " [123 happy lane]" << endl;

        cout << "DateOfBirth (day): " << s2.getDateOfBirth().tm_mday << " [31]" << endl;
        cout << "DateOfBirth (month): " << s2.getDateOfBirth().tm_mon << " [9] " << endl;
        cout << "DateOfBirth (year): " << s2.getDateOfBirth().tm_year << " [118] " <<endl;
	cout << "Email: " << s2.getEmail() << " [abcd@richmond.edu]" << endl;

        cout << "Phone: " << s2.getPhone() << " [1234567890]" << endl;
	
	cout << "Admit Date (day): " << s2.getAdmitDate().tm_mday << " [15]" << endl;
	cout << "Admit Date (month): " << s2.getAdmitDate().tm_mon << " [7]" << endl;
	cout << "Admit Date (year): " << s2.getAdmitDate().tm_year << " [115]" << endl;
	
	cout << "School: " << s2.getSchool() << " [LAW]" << endl;

	cout << "GPA: " << s2.getGPA() << " [3.45]" << endl;

	cout << "Completed Units: " << s2.getUnitsCompleted() << " [10.5]" << endl;

	cout << "Full Time Status: " << s2.getFullTimeStatus() << " [true]" << endl;
	
	return 0;
}

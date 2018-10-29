#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <iostream>
#include <list>
#include "Person.h"
#include "Student.h"

Student::Student() : Person() {
	School school;
	sch = school; 
	fullTime = false; 
	completeUnits = 0.0; 
	GPA = 0.0; 
	std::list<std::string> listCourse;
	courses = listCourse;
}                      // explicitly call Person() on implementation
Student::Student(const Student& other) : Person(other) {}  // call Person(other) on implementation
Student::Student(int urid, std::string netid, std::string lname, std::string fname,  int dob_day, int dob_mo, int dob_yr, std::string email, std::string address, long phone, int day_admit, int month_admit, int year_admit, School school, bool is_full_time, double units_completed, double grade, std::list<std::string> courseList) : Person(urid, netid, lname, fname, dob_day, dob_mo, dob_yr, email, address, phone){
	dateOfAdmit.tm_mday = day_admit;
	dateOfAdmit.tm_mon = month_admit;
	dateOfAdmit.tm_year = year_admit;
	sch = school;
	fullTime = is_full_time;
	completeUnits = units_completed;
	GPA = grade;
	courses = courseList;
}
Student::~Student() {}

std::list<std::string> Student::getCourses() {return courses;}
void Student::addCourse(std::string course) {courses.push_back(course);}
void Student::removeCourse(std::string course) {courses.remove(course);}
void Student::printCourses() {
    std::cout << "Courses: "; 
    for (std::list<std::string>::iterator it=courses.begin(); it!=courses.end(); it++) {
       std::cout << *it << ", ";
    }
    std::cout << std::endl;
}
void Student::setCourses(std::list<std::string> newCourses) {courses = newCourses;}
void Student::clearCourses() {courses.clear();}

struct tm Student::getAdmitDate() {return dateOfAdmit;}
Student::School Student::getSchool() {return sch;}
double Student::getGPA() {return GPA;}
double Student::getUnitsCompleted() {return completeUnits;}
bool Student::isFullTime() { return fullTime; }

void Student::setAdmitDate(int day, int month, int year) {
	dateOfAdmit.tm_mday = day;
	dateOfAdmit.tm_mon = month;
	dateOfAdmit.tm_year = year;
}
void Student::setSchool(School school) {sch = school;}
void Student::setGPA(double gpa) {GPA = gpa;}
void Student::setUnitsCompleted(double units) {completeUnits = units;}
void Student::setFullTimeStatus(bool isFullTime) {fullTime = isFullTime;}

#endif

#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"
#include "Student.h"

Student::Student() : Person() {sch = null; fullTime = false; completeUnits = 0.0;}                      // explicitly call Person() on implementation
Student::Student(const Student& other) : Person(other) {}  // call Person(other) on implementation
Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed) : Person(urid, netid, lname, fname, dob_day, dob_month, dob_year, email, address, phone){
	sch = school;
	fullTime = is_full_time;
	completeUnits = units_completed;
	GPA = 
}
Student::~Student() {}

std::list<std::string> Student::getCourses() {return courses;}
void Student::addCourse(std::string course) {courses.insert(course);}
void Student::removeCourse(std::string course) {courses.remove(course);}
void Student::printCourses() {
    cout << "Courses: "; 
    for (list<int>::iterator it=courses.begin(); it!=courses.end(); it++) {
       cout << *i << " ";
    }
    cout << endl;
}
void Student:: setCourses(std::list<std::string> courses) {courses = courses;}
void Student::clearCourses() {courses.clear()}

struct tm Student::getAdmitDate() {return dateOfAdmit;}
School Student::getSchool() {return sch}
double Student::getGPA() {return gpa;}
double Student::getUnitsCompleted() {return completeUnits}
bool Student::isFullTime() { return fullTime; }

void Student::setAdmitDate(int day, int month, int year) {



}
void Student::setSchool(School school) {sch = school;}
void Student::setGPA(double gpa) {}
void Student::setUnitsCompleted(double units) {completeUnits = units;}
void Student::setFullTimeStatus(bool isFullTime) {fullTime = isFullTime;}

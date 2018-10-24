#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

Person::Person() 
  : URID(-1), netID(""), firstName(""), lastName(""), eMail(""), Address(""), Phone(0000000000)
{
  dateOfBirth.tm_mon = 0;
  dateOfBirth.tm_day = 0;
  dateOfBirth.tm_year = 0;
}

Person::Person(const Person& other) {}

Person::Person(int urid, std::string netid, std::string lname, std::string fname,
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone) {}

Person::~Person() {}

std::string  Person::getFirstName() {return firstName;}
std::string  Person::getLastName() {return lastName;}
struct tm    Person::getDateOfBirth() {return dateOfBirth}
std::string  Person::getAddress() {return Address;}
std::string  Person::getNetID() {return netID;}
int          Person::getURID() {return URID;}
std::string  Person::getEmail() {return eMail;}
long         Person::getPhone() {return Phone;}

void Person::setFirstName(std::string fname) {}
void Person::setLastName(std::string lname) {lastName = lname;}
void Person::setDateOfBirth(int day, int month, int year) {}
void Person::setAddress(std::string address) {Address = address;}
void Person::setNetID(std::string netid) {}
void Person::setURID(int urid)  {URID = urid;}
void Person::setEmail(std::string email) {}
void Person::setPhone(long number) {Phone = number;}




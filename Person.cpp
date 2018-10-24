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

Person::Person(const Person& other) {
  URID = other.URID;
  netID = other.netID;
  lastName = other.lastName;
  firstName = other.firstName;
  eMail = other.eMail;
  Address = other.Address;
  Phone = other.Phone;
  
  dateOfBirth.tm_mon = other.dateOfBirth.tm_mon;
  dateOfBirth.tm_day = other.dateOfBirth.tm_day;
  dateOfBirth.tm_year = other.dateOfBirth.tm_year;
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname,
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone) {
  URID = urid;
  netID = netid;
  lastName = lname;
  firstName = fname;
  eMail = email;
  Address = address;
  Phone = phone;
  
  dateOfBirth.tm_mon = dob_month;
  dateOfBirth.tm_day = dob_day;
  dateOfBirth.tm_year = dob_year;
}

Person::~Person() {}

std::string  Person::getFirstName() {return firstName;}
std::string  Person::getLastName() {return lastName;}
struct tm    Person::getDateOfBirth() {return dateOfBirth}
std::string  Person::getAddress() {return Address;}
std::string  Person::getNetID() {return netID;}
int          Person::getURID() {return URID;}
std::string  Person::getEmail() {return eMail;}
long         Person::getPhone() {return Phone;}

void Person::setFirstName(std::string fname) {firstName = fname;}
void Person::setLastName(std::string lname) {lastName = lname;}
void Person::setDateOfBirth(int day, int month, int year) {
        dateOfBirth.tm_day = day;
        dateOfBirth.tm_month = month-1;
        dateOfBirth.tm_year = year-1900;
}
void Person::setAddress(std::string address) {Address = address;}
void Person::setNetID(std::string netid) {netID = netid;}
void Person::setURID(int urid)  {URID = urid;}
void Person::setEmail(std::string email) {eMail = email;}
void Person::setPhone(long number) {Phone = number;}




#ifndef PERSON_H //header for _h
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
	private:
		string name;
		int yearOfBirth;
	
	public:
		Person();
		Person(string name, int yearOfBirth);
		~Person();
		
		string getName();
		int getYearOfBirth();
		
		void setName(string name);
		void setYearOfBirth(int yearOfBirth);
};

Person::Person()
{
	this->name = "Daniel";
	this->yearOfBirth = 2020;
}

Person::Person(string name, int yearOfBirth)
{
	this->name = name;
	this->yearOfBirth = yearOfBirth;
}

Person::~Person()
{
	
}

string Person::getName()
{
	return this->name;
}

int Person::getYearOfBirth()
{
	return this->yearOfBirth;
}

void Person::setName(string name)
{
	this->name = name;
}

void Person::setYearOfBirth(int yearOfBirth)
{
	this->yearOfBirth = yearOfBirth;
}

#endif 
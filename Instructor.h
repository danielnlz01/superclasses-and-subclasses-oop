#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

class Instructor: public Person
{
	private:
		int salary;
		
	public:
		Instructor();
		Instructor(string name, int age, int salary);
		~Instructor();
		
		int getSalary();
		
		void setSalary(int salary);
};

Instructor::Instructor():Person()
{
	this->salary = 0;
}

Instructor::Instructor(string name, int age, int salary):Person(name, age)
{
	this->salary = salary;
}

Instructor::~Instructor()
{
	
}

int Instructor::getSalary()
{
	return this->salary;
}

void Instructor::setSalary(int salary)
{
	this->salary = salary;
}

#endif
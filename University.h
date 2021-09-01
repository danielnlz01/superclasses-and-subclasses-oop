#ifndef UNIVERSITY_H
#define UNIVERSITY_H_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Faculty.h"

using namespace std;

class University
{
	private:
		string name;
		int founded;
		Student studentList[1000];
		int studentCounter = 0;
		Faculty facultyList[5];
		int facultyCounter = 0;
	public:
		Faculty();
		Faculty(string name, string area);
		~Faculty();
		
		string getName();
		string getArea();
		
		void setName(string name);
		void setArea(string area);
		void printInstructors();
		void addInstructor(Instructor& in);
	
};

Faculty::Faculty()
{
	this->name = "";
	this->area = "";
}

Faculty::Faculty(string name, string area)
{
	this->name = name;
	this->area = area;
}

Faculty::~Faculty()
{
	delete &this->name;
	delete &this->area;
	delete &this->instructorList[0];
	delete &this->instructorCounter;
}

string Faculty::getName()
{
	return this->name;
}

string Faculty::getArea()
{
	return this->area;
}
	
void Faculty::setName(string name)
{
	this->name = name;
}

void Faculty::setArea(string area)
{
	this->area = area;
}

void Faculty::addInstructor(Instructor& in)
{
	this->instructorList[this->instructorCounter] = in;
	this->instructorCounter++;
	
	if (this->instructorCounter >= 100)
	{
		this->instructorCounter =99;
	}
}

void Faculty::printInstructors()
{
	for (int i = 0; i < this->instructorCounter; i++)
	{
		cout << this->instructorList[i].getName() << endl;
	}
}

#endif
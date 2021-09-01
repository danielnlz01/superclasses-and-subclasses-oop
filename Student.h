#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "Person.h"
#include "Book.h"

using namespace std;

class Student: public Person
{
	private:
		string major;
		Book booklist[10];
		int bookCounter = 0;
	public:
		Student();
		Student(string name, int age, string major);
		~Student();
		
		string getMajor();
		
		void setMajor(string major);
		void addBook(Book& b); //receiving address of a pointer *b1 *b2 *b3
		void printBooks();
};

Student::Student():Person()
{
	this->major = "None";
}

Student::Student(string name, int age, string major):Person(name, age)
{
	this->major = major;
}

Student::~Student()
{
	
}

string Student::getMajor()
{
	return this->major;
}

void Student::setMajor(string major)
{
	this->major = major;
}

void Student::addBook(Book& b)
{
	this->booklist[this->bookCounter] = b;
	this->bookCounter++;
	
	if (this->bookCounter >= 10)
	{
		this->bookCounter =9;
	}
}

void Student::printBooks()
{
	for (int i = 0; i < this->bookCounter; i++)
	{
		cout << this->booklist[i].getTitle() << endl;
	}
}

#endif

#include <iostream>
#include <string>

#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Book.h"
#include "Faculty.h"

using namespace std;

int main() 
{
	Person *p1 = new Person("Rolando", 32);
	cout << p1->getName() << endl;
	cout << p1->getYearOfBirth() << endl;
	
	Student *s1 = new Student("German", 18, "ITC");
	cout << s1->getName() << endl;
	cout << s1->getYearOfBirth() << endl;
	cout << s1->getMajor() << endl;
	
	Instructor *i1 = new Instructor("Daniel", 19, 100000);
	cout << i1->getName() << endl;
	cout << i1->getYearOfBirth() << endl;
	cout << i1->getSalary() << endl;
	
	cout << "\nadding books" << endl;
	Book *b1 = new Book("Java", 132);
	Book *b2 = new Book("Python", 999);
	Book *b3 = new Book("C++", 1080);
	s1->addBook(*b1);
	s1->addBook(*b2);
	s1->addBook(*b3);
	s1->printBooks();
	
	Student *s2 = new Student("Arantza", 18, "ITC");
	//delete s2;
	
	//cout << "\nadding instructors" << endl;
	Instructor *i2 = new Instructor("Eduardo", 19, 6000);
	Instructor *i3 = new Instructor("Juan", 19, 17000);
	Instructor *i4 = new Instructor("Pepe", 19, 10880);
	
	
	Faculty *f = new Faculty("CIENCIAS APLICADAS", "CIENCIAS DE DATOS");
	cout << "instructors of the faculty: " << endl << endl;
	cout << f->getName() << endl;
	cout << f->getArea() << endl;
	f->addInstructor(*i1);
	f->addInstructor(*i2);
	f->addInstructor(*i3);
	f->addInstructor(*i4);
	f->printInstructors();
	
	
  return 0;
}
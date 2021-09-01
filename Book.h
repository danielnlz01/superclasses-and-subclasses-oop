#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string title;
    int pages;
public:
    Book();
    Book(string title, int pages);
    ~Book();

    string getTitle();
    int getPages();

    void setTitle(string title);
    void setPages(int pages);
};

Book::Book()
{
    this->title = "none";
    this->pages = 0;
}

Book::Book(string title, int pages)
{
    this->title = title;
    this->pages = pages;
}

Book::~Book()
{

}

string Book::getTitle()
{
    return this->title;
}

int Book::getPages()
{
    return this->pages;
}

void Book::setTitle(string title)
{
    this->title = title;
}
void Book::setPages(int pages)
{
    this->pages = pages;
}

#endif
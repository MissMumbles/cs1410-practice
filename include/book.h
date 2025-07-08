#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include "author.h"

class Book {
private:
    std::string title;
    int year;
    Author author;

public:
    Book(const std::string& t, int y, const Author& a): title(t), year(y),author(a){}

    std::string getTitle() const {
        return title;
    }
    int getYear(){
        return year;
    }
    Author getAuthor(){
        return author;
    }

    void setTitle(const std::string& t) {
        title=t;
    }
    void setYear(int y){
        year=y;
    }
    void setAuthor(const Author& a){
        author=a;
    }

    void show() const{
        std::cout<< "Book: "<< title << " (" << year << ")\n"
            << "Author: "<< author.getName()<<" ["<< author.getNationality()<<"]\n";
    }

     
};


#endif
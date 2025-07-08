#include "book.h"

Book::Book(const std::string& t, int y, const Author& a): title(t), year(y),author(a){}

    std::string Book::getTitle() const {
        return title;
    }
    int Book::getYear(){
        return year;
    }
    Author Book::getAuthor(){
        return author;
    }

    void Book::setTitle(const std::string& t) {
        title=t;
    }
    void Book::setYear(int y){
        year=y;
    }
    void Book::setAuthor(const Author& a){
        author=a;
    }

    void show() {
        std::cout<< "Book: "<< Book::getTitle << " (" << Book::getYear << ")\n"
            << "Author: "<< Author::getName<<" ["<< Author::getNationality<<"]\n";
    }

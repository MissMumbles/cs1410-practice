#include <iostream>
#include "author.h"
#include "book.h"

int main(){
    Author a("George Orwell", "British");
    Book b("1984", 1949, a);

    b.show();


    return 0;
}
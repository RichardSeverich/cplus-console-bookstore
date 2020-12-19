#ifndef BOOK_CPP
#define BOOK_CPP

#include <iostream>
#include <string>

#include "..\author/Author.cpp"

using namespace std;

class Book {
  
  public:
    string name;
    Author author;
};
#endif

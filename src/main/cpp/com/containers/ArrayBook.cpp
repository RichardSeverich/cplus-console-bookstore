#ifndef ARRAYBOOK_CPP
#define ARRAYBOOK_CPP

#include <vector>

#include "..\models\book/Book.cpp"

using namespace std;

class ArrayBook {
  public :
    static vector<Book> bookList;
};
vector<Book> ArrayBook::bookList;
#endif

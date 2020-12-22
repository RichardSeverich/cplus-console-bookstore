#ifndef ARRAYAUTHOR_CPP
#define ARRAYAUTHOR_CPP

#include <vector>

#include "..\models\author/Author.cpp"

using namespace std;

class ArrayAuthor {
  public :
    static vector<Author> authorList;
};
vector<Author> ArrayAuthor::authorList;
#endif

#include <iostream>
#include <string>
#include <vector>

#include "Author.cpp"
#include "../..\containers/ArrayAuthor.cpp"

using namespace std;

class DefaultAuthor {
  public :
    static void defaultAuthor(){
      Author author1;
      author1.name = "Luis";
      author1.lastName = "Mendez";
      author1.birthdate = "10/10/1960";
      ArrayAuthor::authorList.push_back(author1);

      Author author2;
      author2.name = "Felipe";
      author2.lastName = "Zapata";
      author2.birthdate = "10/10/1970";
      ArrayAuthor::authorList.push_back(author2);

      Author author3;
      author3.name = "Fanor";
      author3.lastName = "Rodriguez";
      author3.birthdate = "10/10/1980";
      ArrayAuthor::authorList.push_back(author3);

      Author author4;
      author4.name = "Michael";
      author4.lastName = "Jackson";
      author4.birthdate = "10/10/1950";
      ArrayAuthor::authorList.push_back(author4);

      Author author5;
      author5.name = "Sebastian";
      author5.lastName = "Ortuño";
      author5.birthdate = "10/10/1870";
      ArrayAuthor::authorList.push_back(author5);

      Author author6;
      author6.name = "Edwin";
      author6.lastName = "Veizaga";
      author6.birthdate = "10/10/1860";
      ArrayAuthor::authorList.push_back(author6);

      Author author7;
      author7.name = "Luffy";
      author7.lastName = "Perez";
      author7.birthdate = "01/10/2000";
      ArrayAuthor::authorList.push_back(author7);

      Author author8;
      author8.name = "Jose";
      author8.lastName = "Candia";
      author8.birthdate = "09/11/2001";
      ArrayAuthor::authorList.push_back(author8);

      Author author9;
      author9.name = "Kevin";
      author9.lastName = "Paredes";
      author9.birthdate = "04/04/1960";
      ArrayAuthor::authorList.push_back(author9);

      Author author10;
      author10.name = "Javier";
      author10.lastName = "mamani";
      author10.birthdate = "13/10/1980";
      ArrayAuthor::authorList.push_back(author10);
  };
};

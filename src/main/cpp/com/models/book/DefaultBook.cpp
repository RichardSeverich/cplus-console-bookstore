#include <iostream>
#include <string>
#include <vector>

#include "Book.cpp"
#include "..\author/Author.cpp"
#include "../..\containers/ArrayBook.cpp"
#include "../..\containers/ArrayAuthor.cpp"

using namespace std;

class DefaultBook {
  public :
  static void defaultBook(){
    Book book1;
    book1.name = "Lord of Rings";
    Author author1 = ArrayAuthor::authorList.at(0);
    book1.author = author1;
    ArrayBook::bookList.push_back(book1);

    Book book2;
    book2.name = "Alice in Wonderland";
    Author author2 = ArrayAuthor::authorList.at(1);
    book2.author = author2;
    ArrayBook::bookList.push_back(book2);

    Book book3;
    book3.name = "Game Of Thrones";
    Author author3 = ArrayAuthor::authorList.at(2);
    book3.author = author3;
    ArrayBook::bookList.push_back(book3);

    Book book4;
    book4.name = "Vikings";
    Author author4 = ArrayAuthor::authorList.at(3);
    book4.author = author4;
    ArrayBook::bookList.push_back(book4);

    Book book5;
    book5.name = "Empires";
    ArrayBook::bookList.push_back(book5);

    Book book6;
    book6.name = "StarCraft";
    ArrayBook::bookList.push_back(book6);

    Book book7;
    book7.name = "Dota";
    ArrayBook::bookList.push_back(book7);

    Book book8;
    book8.name = "Medal Of Honor";
    ArrayBook::bookList.push_back(book8);

    Book book9;
    book9.name = "Call Of Duty";
    ArrayBook::bookList.push_back(book9);

    Book book10;
    book10.name = "Wars";
    ArrayBook::bookList.push_back(book10);
  };
};

#include "../..\models\book/Book.cpp"
#include "../..\models\author/Author.cpp"
#include "../..\containers/ArrayBook.cpp"
#include "../..\controllers/HandleFindElement.cpp"

class RemoveAuthorToBook {
  public :
  static void show() {
    system("cls");
    int idBook;
    cout << "______________________________________\n";
    cout << "******** REMOVE AUTHOR TO BOOK *******\n";
    cout << "______________________________________\n";
    cout << "ENTER ID BOOK\n";
    cin >> idBook;
      if (idBook < ArrayBook::bookList.size() && idBook >= 0) {
        Author author;
        ArrayBook::bookList.at(idBook).author = author;
        cout << "REMOVED\n";
        system("pause");
      } else {
      cout << "INVALID ID AUTHOR OR BOOK\n";
    }
  };
};
#include "../..\models\author/Author.cpp"
#include "../..\containers/ArrayAuthor.cpp"
#include "../..\containers/ArrayBook.cpp"
#include "../..\controllers/HandleFindElement.cpp"

class AssignAuthorToBook {
  public :
  static void show() {
    system("cls");
    int idAuthor;
    int idBook;
    cout << "______________________________________\n";
    cout << "******** ASSIGN AUTHOR TO BOOK *******\n";
    cout << "______________________________________\n";
    cout << "ENTER ID AUTHOR\n";
    cin >> idAuthor;
    cout << "ENTER ID BOOK\n";
    cin >> idBook;
    if (idAuthor < ArrayAuthor::authorList.size() && idAuthor >= 0) {
      if (idBook < ArrayBook::bookList.size() && idBook >= 0) {
        Author author = HandleFindElement::action(ArrayAuthor::authorList, idAuthor);
        ArrayBook::bookList.at(idBook).author = author;
        cout << "ASSIGNED\n";
      }
    } else {
      cout << "INVALID ID AUTHOR OR BOOK\n";
    }
  };
};

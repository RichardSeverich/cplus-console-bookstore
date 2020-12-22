#include "../..\controllers/HandleEdit.cpp"
#include "../..\models\book/Book.cpp"
#include "../..\containers/ArrayBook.cpp"

class EditBook {

  public :
  static void bookEdit() {
    system("cls");
    int id;
    cout << "______________________________________\n";
    cout << "********         EDIT         ********\n";
    cout << "______________________________________\n";
    cout << "ENTER ID\n";
    cin >> id;
    if (id < ArrayBook::bookList.size() && id >= 0) {
      Book book;
      cout << "ENTER NAME OF BOOK\n";
      cin >> book.name;
      ArrayBook::bookList = HandleEdit::action<Book>(ArrayBook::bookList, book, id);
      cout << "EDITED\n";
    } else {
      cout << "INVALID ID\n";
    }
  };
};

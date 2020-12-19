#include "../..\controllers/HandleRegister.cpp"
#include "../..\models\book/Book.cpp"
#include "../..\containers/ArrayBook.cpp"

class RegisterBook {
  public :
  static void bookRegister() {
    system("cls");
    cout << "______________________________________\n";
    cout << "********       REGISTER       ********\n";
    cout << "______________________________________\n";
    cout << "ENTER NAME OF BOOK\n";
    Book book;
    cin >> book.name;
    cout << "REGISTER\n";
    ArrayBook::bookList = HandleRegister::action<Book>(ArrayBook::bookList, book);
  };
};

#include "../..\controllers/HandleRemove.cpp"
#include "../..\models\book/Book.cpp"
#include "../..\containers/ArrayBook.cpp"

class RemoveBook {

  public :
  static void bookRemove() {
    system("cls");
    int id;
    cout << "______________________________________\n";
    cout << "********        REMOVE        ********\n";
    cout << "______________________________________\n";
    cout << "ENTER ID\n";
    cin >> id;
    if (id < ArrayBook::bookList.size() && id >= 0) {
      ArrayBook::bookList = HandleRemove::action<Book>(ArrayBook::bookList, id);
      cout << "REMOVED\n";
    } else {
      cout << "INVALID ID\n";
    }
  };
};

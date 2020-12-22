#include "../..\controllers/HandleRemove.cpp"
#include "../..\models\author/Author.cpp"
#include "../..\containers/ArrayAuthor.cpp"

class RemoveAuthor {

  public :
  static void authorRemove() {
    system("cls");
    int id;
    cout << "______________________________________\n";
    cout << "********        REMOVE        ********\n";
    cout << "______________________________________\n";
    cout << "ENTER ID\n";
    cin >> id;
    if (id < ArrayAuthor::authorList.size() && id >= 0) {
      ArrayAuthor::authorList = HandleRemove::action<Author>(ArrayAuthor::authorList, id);
      cout << "REMOVED\n";
    } else {
      cout << "INVALID ID\n";
    }
  };
};

#include "../..\controllers/HandleEdit.cpp"
#include "../..\models\author/Author.cpp"
#include "../..\containers/ArrayAuthor.cpp"

class EditAuthor {

  public :
  static void authorEdit() {
    system("cls");
    int id;
    cout << "______________________________________\n";
    cout << "********         EDIT         ********\n";
    cout << "______________________________________\n";
    cout << "ENTER ID\n";
    cin >> id;
    if (id < ArrayAuthor::authorList.size() && id >= 0) {
      Author author;
      cout << "ENTER NAME\n";
      cin >> author.name;
      cout << "ENTER LASTNAME\n";
      cin >> author.lastName;
      cout << "ENTER BIRTHDATE\n";
      cin >> author.birthdate;
      ArrayAuthor::authorList = HandleEdit::action<Author>(ArrayAuthor::authorList, author, id);
      cout << "EDITED\n";
    } else {
      cout << "INVALID ID\n";
    }
  };
};

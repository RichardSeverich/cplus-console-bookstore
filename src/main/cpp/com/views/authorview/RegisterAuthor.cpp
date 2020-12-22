#include "../..\controllers/HandleRegister.cpp"
#include "../..\models\author/Author.cpp"
#include "../..\containers/ArrayAuthor.cpp"

class RegisterAuthor {
  public :
  static void authorRegister() {
    system("cls");
    cout << "______________________________________\n";
    cout << "********       REGISTER       ********\n";
    cout << "______________________________________\n";
    Author author;
    cout << "ENTER NAME\n";
    cin >> author.name;
    cout << "ENTER LASTNAME\n";
    cin >> author.lastName;
    cout << "ENTER BIRTHDATE\n";
    cin >> author.birthdate;
    ArrayAuthor::authorList = HandleRegister::action<Author>(ArrayAuthor::authorList, author);
  };
};

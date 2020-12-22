#include "AuthorMenu.cpp"
#include "RegisterAuthor.cpp"
#include "EditAuthor.cpp"
#include "RemoveAuthor.cpp"
#include "ShowAuthor.cpp"

using namespace std;

class AuthorSwitch {

  public :
  static void show() {
    char option;
    do {
      system("cls");
      AuthorMenu::show();
      cin >> option;
      switch (option) {
        case '1':
          RegisterAuthor::authorRegister();
          break;
        case '2':
          EditAuthor::authorEdit();
          break;
        case '3':
          RemoveAuthor::authorRemove();
          break;
        case '4':
          ShowAuthor::authorShow();
          break;
        case '5':
          cout << "RETURNING\n";
        break;
        default:
          cout << "INVALID OPTION\n";
      };
    }while (option != '5');
  };
};

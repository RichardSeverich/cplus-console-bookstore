#include "AssignAuthorToBook.cpp"
#include "AssignAuthorMenu.cpp"
#include "RemoveAuthorToBook.cpp"

using namespace std;

class AssignAuthorSwitch {

  public :
  static void show() {
    char option;
    do {
      system("cls");
      AssignAuthorMenu::show();
      cin >> option;
      switch (option) {
        case '1':
          AssignAuthorToBook::show();
          break;
        case '2':
          RemoveAuthorToBook::show();
          break;
        case '3':
          cout << "RETURNING\n";
          break;
        default:
          cout << "INVALID OPTION\n";
      };
    }while (option != '3');
  };
};
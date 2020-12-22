#include "BookMenu.cpp"
#include "RegisterBook.cpp"
#include "EditBook.cpp"
#include "RemoveBook.cpp"
#include "ShowBook.cpp"

using namespace std;

class BookSwitch {

  public :
  static void show() {
    char option;
    do {
      system("cls");
      BookMenu::show();
      cin >> option;
      switch (option) {
        case '1':
          RegisterBook::bookRegister();
          break;
        case '2':
          EditBook::bookEdit();
          break;
        case '3':
          RemoveBook::bookRemove();
          break;
        case '4':
          ShowBook::bookShow();
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

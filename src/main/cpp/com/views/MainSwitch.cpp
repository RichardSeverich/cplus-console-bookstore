#include "MainMenu.cpp"
#include "userview/UserSwitch.cpp"
#include "authorview/AuthorSwitch.cpp"
#include "bookview/BookSwitch.cpp"
#include "assignAuthorview/AssignAuthorSwitch.cpp"
#include "Bye.cpp"

class MainSwitch {

  public :
  static void show() {
    char option;
    do {
      system("cls");
      MainMenu::show();
      cin >> option;
      switch (option) {
        case '1':
          UserSwitch::show();
          break;
        case '2':
          AuthorSwitch::show();
          break;
        case '3':
          BookSwitch::show();
          break;
        case '4':
          AssignAuthorSwitch::show();
          break;
        case '5':
          Bye::show();
          break;
        default:
          cout << "INVALID OPTION\n";
      };
    }while (option != '5');
  };
};

#include "UserMenu.cpp"
#include "RegisterUser.cpp"
#include "EditUser.cpp"
#include "RemoveUser.cpp"
#include "ShowUser.cpp"

using namespace std;

class UserSwitch {

  public :
  static void show() {
    char option;
    do {
      system("cls");
      UserMenu::show();
      cin >> option;
      switch (option) {
        case '1':
          RegisterUser::userRegister();
          break;
        case '2':
          EditUser::userEdit();
          break;
        case '3':
          RemoveUser::userRemove();
          break;
        case '4':
          ShowUser::userShow();
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

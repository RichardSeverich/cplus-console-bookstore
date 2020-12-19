#include <iostream>
#include <string>

#include "../..\security/ValidateUser.cpp"
#include "../..\containers/UserLogin.cpp"
#include "..\Welcome.cpp"

using namespace std;

class Login {
  public :
  static void show() {
    string userName;
    string password;
    do{
      system("cls");
      cout << "______________________________________\n";
      cout << "********         LOGIN        ********\n";
      cout << "______________________________________\n";
      cout << "ENTER YOUR USERNAME\n";
      cin >> userName;
      cout << "______________________________________\n\n";
      cout << "ENTER YOUR PASSWORD\n";
      cin >> password;
      cout << "______________________________________\n\n";
      UserLogin::userLogin = userName;
      if (! ValidateUser::validate(userName, password)) {
        cout << "INCORRECT USERNAME OR PASSWORD\nTRY AGAIN...";
        system("pause");
      }
    } while (! ValidateUser::validate(userName, password));
    Welcome::show();
    system("pause");
  };
};

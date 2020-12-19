#include <iostream>

#include "..\containers/UserLogin.cpp"

using namespace std;

class Welcome {
  public :
  static void show() {
    cout << "**************************************************\n";
    cout << "WELCOME TO BOOKSTORE\n";
    cout << "YOUR LOGIN WHIT: " << UserLogin::userLogin << endl;
    cout << "**************************************************\n";
  };
};

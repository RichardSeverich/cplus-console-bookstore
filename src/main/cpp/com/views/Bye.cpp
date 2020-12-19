#include <iostream>

#include "..\containers/UserLogin.cpp"

using namespace std;

class Bye {
  public :
  static void show() {
    cout << "**************************************************\n";
    cout << "BYE: " << UserLogin::userLogin << endl;
    cout << "THANKS FOR USING THIS PROGRAM\n";
    cout << "**************************************************\n";
  };
};
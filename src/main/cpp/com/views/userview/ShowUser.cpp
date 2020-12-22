#include "../..\models\user/User.cpp"
#include "../..\containers/ArrayUser.cpp"

class ShowUser {
  public :
  static void userShow() {
    system("cls");
    int id = 0;
    cout << "______________________________________\n";
    cout << "********         SHOW         ********\n";
    cout << "______________________________________\n";
    for (User user : ArrayUser::userList) {
      cout << "*****                            *****\n";
      cout << "______________________________________\n";
      cout << "                 USER                 \n";
      cout << "______________________________________\n";
      cout << "ID: " << id << endl;
      cout << "USERNAME: " << user.userName << endl;
      cout << "PASSWORD: " << user.password << endl;
      cout << "______________________________________\n";
      id++;
    }
    system("pause");
  };
};
#include "../..\controllers/HandleRegister.cpp"
#include "../..\models\user/User.cpp"
#include "../..\containers/ArrayUser.cpp"

class RegisterUser {
  public :
  static void userRegister() {
    system("cls");
    cout << "______________________________________\n";
    cout << "********       REGISTER       ********\n";
    cout << "______________________________________\n";
    cout << "ENTER USERNAME\n";
    User user;
    cin >> user.userName;
    cout << "ENTER PASSWORD\n";
    cin >> user.password;
    cout << "REGISTER\n";
    ArrayUser::userList = HandleRegister::action<User>(ArrayUser::userList, user);
  };
};

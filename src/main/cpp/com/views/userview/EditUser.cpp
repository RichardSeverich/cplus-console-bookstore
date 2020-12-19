#include "../..\controllers/HandleEdit.cpp"
#include "../..\models\user/User.cpp"
#include "../..\containers/ArrayUser.cpp"

class EditUser {

  public :
  static void userEdit() {
    system("cls");
    int id;
    cout << "______________________________________\n";
    cout << "********         EDIT         ********\n";
    cout << "______________________________________\n";
    cout << "ENTER ID\n";
    cin >> id;
    if (id < ArrayUser::userList.size() && id >= 0) {
      User user;
      cout << "ENTER USERNAME\n";
      cin >> user.userName;
      cout << "ENTER PASSWORD\n";
      cin >> user.password;
      ArrayUser::userList = HandleEdit::action<User>(ArrayUser::userList, user, id);
      cout << "EDITED\n";
    } else {
      cout << "INVALID ID\n";
    }
  };
};

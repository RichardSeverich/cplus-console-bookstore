#include "../..\controllers/HandleRemove.cpp"
#include "../..\models\user/User.cpp"
#include "../..\containers/ArrayUser.cpp"

class RemoveUser {

  public :
  static void userRemove() {
    system("cls");
    int id;
    cout << "______________________________________\n";
    cout << "********        REMOVE        ********\n";
    cout << "______________________________________\n";
    cout << "ENTER ID\n";
    cin >> id;
    if (id < ArrayUser::userList.size() && id >= 0) {
      ArrayUser::userList = HandleRemove::action<User>(ArrayUser::userList, id);
      cout << "REMOVED\n";
    } else {
      cout << "INVALID ID\n";
    }
  };
};

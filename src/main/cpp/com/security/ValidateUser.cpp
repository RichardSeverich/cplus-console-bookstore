#include "..\containers/ArrayUser.cpp"
#include "..\models\user/User.cpp"

class ValidateUser {
  private :
    
  public :
    static bool validate(string userName, string password) {
      for (User user : ArrayUser::userList) {
        if (user.userName == userName && user.password == password) {
          return true;
        }
      }
      return false;
    }
};

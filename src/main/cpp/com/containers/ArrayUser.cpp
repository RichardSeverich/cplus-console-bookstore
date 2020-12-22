#ifndef ARRAYUSER_CPP
#define ARRAYUSER_CPP

#include "..\models\user/User.cpp"
#include <vector>

class ArrayUser {

  public :
    static vector<User> userList;
};
vector<User> ArrayUser::userList;
#endif

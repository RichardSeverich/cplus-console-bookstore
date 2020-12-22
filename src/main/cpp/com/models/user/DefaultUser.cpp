#include "../..\containers/ArrayUser.cpp"

class DefaultUser {
  
  public :
  static void defaultUser(){
    User user1;
    user1.userName = "micky";
    user1.password = "password";
    ArrayUser::userList.push_back(user1);

    User user2;
    user2.userName = "richard";
    user2.password = "1234";
    ArrayUser::userList.push_back(user2);

    User user3;
    user3.userName = "charli";
    user3.password = "joao";
    ArrayUser::userList.push_back(user3);

    User user4;
    user4.userName = "mich";
    user4.password = "herbas";
    ArrayUser::userList.push_back(user4);

    User user5;
    user5.userName = "gabriel";
    user5.password = "aguilar";
    ArrayUser::userList.push_back(user5);

    User user6;
    user6.userName = "lorena";
    user6.password = "paredes";
    ArrayUser::userList.push_back(user6);

    User user7;
    user7.userName = "ragnar";
    user7.password = "ivar";
    ArrayUser::userList.push_back(user7);

    User user8;
    user8.userName = "rollo";
    user8.password = "sigrid";
    ArrayUser::userList.push_back(user8);

    User user9;
    user9.userName = "emilio";
    user9.password = "1a2b3c";
    ArrayUser::userList.push_back(user9);

    User user10;
    user10.userName = "naruto";
    user10.password = "hinata";
    ArrayUser::userList.push_back(user10);
  };
};

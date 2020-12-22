#ifndef HANDLEREGISTER_CPP
#define HANDLEREGISTER_CPP

#include <vector>
//#include "..\models\user/User.cpp"

class HandleRegister {

  public :
    template<typename T>
    static vector<T> action(vector<T> vec, T element) {
      vec.push_back(element);
      return vec;
    };
};
#endif

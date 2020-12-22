#ifndef HANDLEEDIT_CPP
#define HANDLEEDIT_CPP

#include <vector>

class HandleEdit {

  public :
    template<typename T>
    static vector<T> action(vector<T> vec, T element, int index) {
      vec.at(index) = element;
      return vec;
    };
};
#endif

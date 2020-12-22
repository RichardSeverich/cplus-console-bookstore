#ifndef HANDLEREMOVE_CPP
#define HANDLEREMOVE_CPP

#include <vector>

class HandleRemove {

  public :
    template<typename T>
    static vector<T> action(vector<T> vec, int index) {
      vec.erase(vec.begin() + index);
      return vec;
    };
};
#endif

#ifndef HANDLEFINDELEMENT_CPP
#define HANDLEFINDELEMENT_CPP

#include <vector>

class HandleFindElement {

  public :
    template<typename T>
    static T action(vector<T> vec, int index) {
      T element;
      element = vec.at(index);
      return element;
    };
};
#endif
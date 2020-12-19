#include "views/securityview/Login.cpp"
#include "views/MainSwitch.cpp"
#include "models/user/DefaultUser.cpp"
#include "models/author/DefaultAuthor.cpp"
#include "models/book/DefaultBook.cpp"

int main() {
  DefaultUser::defaultUser();
  DefaultAuthor::defaultAuthor();
  DefaultBook::defaultBook();
  Login::show();
  MainSwitch::show();
  return 0;
}

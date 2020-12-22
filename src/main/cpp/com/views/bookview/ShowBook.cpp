#include "../..\models\book/Book.cpp"
#include "../..\containers/ArrayBook.cpp"

class ShowBook {
  public :
  static void bookShow() {
    system("cls");
    int id = 0;
    cout << "______________________________________\n";
    cout << "********         SHOW         ********\n";
    cout << "______________________________________\n";
    for (Book book : ArrayBook::bookList) {
      cout << "*****                            *****\n";
      cout << "______________________________________\n";
      cout << "                 USER                 \n";
      cout << "______________________________________\n";
      cout << "ID: " << id << endl;
      cout << "NAME: " << book.name << endl;
      cout << "______________________________________\n";
      cout << "AUTHOR NAME: " << book.author.name << endl;
      cout << "AUTHOR LASTNAME: " << book.author.lastName << endl;
      cout << "AUTHOR BIRTHDATE: " << book.author.birthdate << endl;
      cout << "______________________________________\n";
      id++;
    }
    system("pause");
  };
};
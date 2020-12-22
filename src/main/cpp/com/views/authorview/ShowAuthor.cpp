#include "../..\models\author/Author.cpp"
#include "../..\containers/ArrayAuthor.cpp"

class ShowAuthor {
  public :
  static void authorShow() {
    system("cls");
    int id = 0;
    cout << "______________________________________\n";
    cout << "********         SHOW         ********\n";
    cout << "______________________________________\n";
    for (Author author : ArrayAuthor::authorList) {
      cout << "*****                            *****\n";
      cout << "______________________________________\n";
      cout << "                AUTHOR                \n";
      cout << "______________________________________\n";
      cout << "ID: " << id << endl;
      cout << "NAME: " << author.name << endl;
      cout << "LASTNAME: " << author.lastName << endl;
      cout << "BIRTHDATE: " << author.birthdate << endl;
      cout << "______________________________________\n";
      id++;
    }
    system("pause");
  };
};
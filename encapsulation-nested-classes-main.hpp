#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Menu {
private:
  class MenuItem {
    private:
      string description;
    public:
      MenuItem(string mDescription);
      string getDescription();
  };

  vector<MenuItem*> menuItems;
public:
  ~Menu();
  void addMenuItem(string mDescription);
  void printMenu();
};

#include "Menu.hpp"

using namespace std;

Menu::MenuItem::MenuItem(string mDescription) : description(mDescription) {}

Menu::~Menu() {
    for (MenuItem* item : menuItems) {
        delete item;
    }
    menuItems.clear();
}

void Menu::addMenuItem(string mDescription) {
    menuItems.push_back(new MenuItem(mDescription));
}

void Menu::printMenu() {
    for (MenuItem* item : menuItems) {
        cout << item->getDescription() << endl;
    }
}

string Menu::MenuItem::getDescription() {
  return description;
}

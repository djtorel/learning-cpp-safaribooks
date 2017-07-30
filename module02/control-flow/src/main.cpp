// main.cpp
#include <iostream>
#include <string>
using namespace std;

bool login(string uname, string passwd);

int main() {
  int attempts = 0;
  bool success = false;
  while (attempts < 3 && !success) {
    cout << "username: ";
    string uname{};
    cin >> uname;
    cout << "password: ";
    string passwd{};
    cin >> passwd;

    success = login(uname, passwd);
    if(success) {
      cout << "\nYou hacked the Gibson!" << endl;
    } else {
      cout << "Incorrect username or password\n" << endl;
    }
    ++attempts;
  }
  
}

bool login(string uname, string passwd) {
  string login{"root"}, password{"1337"};

  return (login == uname && password == passwd);
}
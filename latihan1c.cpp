#include <iostream>

using namespace std;

int main() {
  string command;
  int no = 1;
  cout << "Program C++ ke-" << no <<" \nInput:  " ;
  cin >> command;
  while (command != "exit")
  {
    cout << "Program C++ ke-" << no << "\nInput:  ";
    cin >> command;
    no = no + 1;
  }

  if (command == "exit")
  {
    cout<< "ok";
  }

}

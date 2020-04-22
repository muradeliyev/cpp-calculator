#include <iostream>

using namespace std;

int main() {
  int first, second;
  string operation;

  cout << "first: ";
  cin >> first;

  cout << "choose an operation(+, -, /, *): ";
  cin >> operation;

  cout << "second: ";
  cin >> second;

  if (operation == "+") cout << first + second;
  else if (operation == "-") cout << first - second;
  else if (operation == "/") cout << first / second;
  else if (operation == "*") cout << first * second;
  else cout << "wrong operation";

  cout << "\n\n";

  return 0;
}
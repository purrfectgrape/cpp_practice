#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "What is your name? ";
  getline(cin, name);
  cout << "Hello " << name << ".\n";
  cout << "What is your favorite food? ";
  getline(cin, name);
  cout << "I like " << name << ", too.\n";
  return 0;
}

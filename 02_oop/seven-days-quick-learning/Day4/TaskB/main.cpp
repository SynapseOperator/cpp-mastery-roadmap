#include <iostream>
#include <string>

#include "Array.h"
using namespace std;

int main() {
  Array<int> a(5);
  for (int i = 0; i < a.getSize(); i++) a[i] = i * 10;

  cout << "Array<int>: ";
  for (int i = 0; i < a.getSize(); i++) cout << a[i] << " ";
  cout << endl;

  Array<string> s(3);
  s[0] = "hello";
  s[1] = "world";
  s[2] = "!";

  cout << "Array<string>: ";
  for (int i = 0; i < s.getSize(); i++) cout << s[i] << " ";
  cout << endl;

  return 0;
}

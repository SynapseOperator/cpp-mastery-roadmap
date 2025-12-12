#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "删除前：" << endl;
  for (auto& x : vi) cout << x << ' ';
  cout << endl;

  vi.erase(remove_if(vi.begin(), vi.end(), [](int x) { return x % 2 == 0; }),
           vi.end());
  
  cout << "删除后：" << endl;
  for(auto& x : vi) cout << x << ' ';
  cout << endl;

  return 0;
}
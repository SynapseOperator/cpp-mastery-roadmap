#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<pair<int, int>> v = {{2, 3}, {2, 1}, {3, 5}, {1, 4}, {3, 2}};

  sort(v.begin(), v.end(),
       [](const pair<int, int>& a, const pair<int, int>& b) {
         if (a.first != b.first)
           return a.first > b.first;
         else
           return a.second < b.second;
       });
  cout << "排序结果:" << endl;
  for(auto& x: v) cout << x.first << "," << x.second <<"   ";
  cout << endl;
  return 0;
}

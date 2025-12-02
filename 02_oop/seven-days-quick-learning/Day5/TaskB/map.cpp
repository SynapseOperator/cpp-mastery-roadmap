#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  string text = "zjm loves gqq for a very very long time.";
  map<string, int> mp;
  unordered_map<string, int> ump;
  string tempt = "";
  for (auto character : text) {
    if (character == ' ') {
      if (!tempt.empty()) {
        mp[tempt]++;
        ump[tempt]++;
        tempt.clear();
      }
    } else {
      tempt += character;
    }
  }
  // 少读一个词
  if (!tempt.empty()) {
    mp[tempt]++;
    ump[tempt]++;
    tempt.clear();
  }
  cout << "map输出:" << endl;
  for (auto& x : mp) cout << x.first << " : " << x.second << endl;
  cout << "unordered_map输出:" << endl;
  for (auto& x : ump) cout << x.first << " : " << x.second << endl;

  return 0;
}
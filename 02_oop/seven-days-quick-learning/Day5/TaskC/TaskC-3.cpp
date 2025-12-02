#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  vector<string> v = {"hi", "csu", "hello", "gorgeous", "world"};
  auto it = find_if(v.begin(), v.end(), 
        [](const string& x){
          return x.size() == 5;
        });
  if(it == v.end()){
    cout << "没有符合条件的字符串" << endl;
    return 0;
  }

  cout << "这个字符串是：" << *it;
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v = {1,2,10,20,3,4,15};
  int even_count = count_if(v.begin(), v.end(), 
      [](int x){
        return (x % 2 == 0);
      });
  int greater_10 = count_if(v.begin(), v.end(), 
      [](int x){
        return (x > 10);
      });
  cout << "偶数个数：" << even_count << endl;
  cout << "大于十个数" << greater_10 << endl;

  return 0;
}
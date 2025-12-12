#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void demo_push_back_invalid();
void demo_push_back_correct();
void demo_erase_invalid();
void demo_erase_correct();

int main() {
    demo_push_back_invalid();
    demo_push_back_correct();
    demo_erase_invalid();
    demo_erase_correct();
    return 0;
}

void demo_push_back_invalid(){
  cout << "push_back_invalid\n";
  vector<int> vi = {1, 2, 3};
  auto it = vi.begin();

  for(; it < vi.end(); it++){
    vi.push_back(4);
    cout << *it;
  }
}

void demo_push_back_correct() {
  cout << "push_back_corrct\n";
  vector<int> vi = {1,2,3};
  size_t old_size = vi.size();
  size_t old_capacity = vi.capacity();
  for(size_t i = 0; i < old_size; i++) {
    vi.push_back(4);
    cout << *(vi.begin() + i) << ' ';
  }
  cout << "\n";
}

void demo_erase_invalid(){
  cout << "erase_invalid\n";
  vector<int> vi = {1,2,3,4,5};

  for(auto it = vi.begin(); it != vi.end(); it++){
    if(*it % 2 == 0){
      vi.erase(it);
    }
  }
}

void demo_erase_correct() {
  cout << "erase_correct\n";
  vector<int> vi = {1,2,3,4,5};

  vi.erase(remove_if(vi.begin(),vi.end(),
        [](int x){if(x % 2 == 0) return true;}),vi.end());
}
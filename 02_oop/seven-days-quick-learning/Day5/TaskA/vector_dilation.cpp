#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.reserve(0); // optional，只是让你看到初始容量

    cout << "初始 capacity = " << v.capacity() << endl;

    for (int i = 0; i < 20; i++) {
        v.push_back(i);
        cout << "push " << i 
             << " | size = " << v.size() 
             << " | capacity = " << v.capacity() 
             << endl;
    }

    return 0;
}

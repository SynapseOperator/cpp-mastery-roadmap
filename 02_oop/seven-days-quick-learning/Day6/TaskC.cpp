#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> mp;

    mp.reserve(1); // 方便观察

    for (int i = 0; i < 50; ++i) {
        mp[i] = i;

        cout << "i=" << i
             << " size=" << mp.size()
             << " bucket_count=" << mp.bucket_count()
             << endl;
    }

    return 0;
}

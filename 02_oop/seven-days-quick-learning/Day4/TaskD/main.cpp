#include <iostream>
#include "Pair.h"
using namespace std;

int main() {
    Pair<int, string> p(1, "hello");
    cout << p.first << " " << p.second << endl;

    Pair<string, double> q("CSU", 3.14);
    cout << q.first << " " << q.second << endl;

    Pair<int, int> r(5, 10);
    cout << r.first + r.second << endl;

    return 0;
}

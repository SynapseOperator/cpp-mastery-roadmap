#include <iostream>
#include "FixedArray.h"
using namespace std;

int main(){
    FixedArray<int, 5> a;
    a.fill(7);

    cout << "FixedArray<int, 5>: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    FixedArray<string, 3> s;
    s.fill("CSU");

    cout << "FixedArray<string, 3>: ";
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    cout << endl;

    return 0;
}

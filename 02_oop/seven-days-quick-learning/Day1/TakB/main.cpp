#include <iostream>
#include "VectorWrapper.h"

using std::cout;
using std::endl;

int main() {
    VectorWrapper vw;

    // 测试添加元素
    vw.add(10);
    vw.add(20);
    vw.add(30);

    cout << "Vector after adding elements: ";
    vw.print();  // 输出：10 20 30

    // 测试查找元素
    cout << "Index of 20: " << vw.find(20) << endl;  // 输出：1
    cout << "Index of 50: " << vw.find(50) << endl;  // 输出：-1

    // 测试删除元素
    vw.remove(20);
    cout << "Vector after removing 20: ";
    vw.print();  // 输出：10 30

    return 0;
}

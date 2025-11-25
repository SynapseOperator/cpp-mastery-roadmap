#include <iostream>
#include "Solution.h"

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> input = {2, 7, 11, 15};
    int target = 9;

    Solution sol(input);  // 创建对象，初始化数据

    // 调用两数之和函数
    vector<int> ans = sol.twoSum(target);

    // 打印结果
    cout << "indices: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

#include "Solution.h"
#include <unordered_map>
using std::unordered_map;

Solution::Solution(const vector<int>& input) : nums(input) {}

vector<int> Solution::twoSum(int target) {
    unordered_map<int, int> mp;  // 哈希表：存数字和其下标

    for (int i = 0; i < (int)nums.size(); i++) {
        int x = nums[i];
        int need = target - x;

        // 如果之前遇到过需要的数字（哈希表查找 O(1)）
        if (mp.count(need)) {
            return { mp[need], i };  // 返回对应的下标
        }

        mp[x] = i;  // 存储当前数字及其下标
    }
    return {};  // 没有找到，返回空数组
}

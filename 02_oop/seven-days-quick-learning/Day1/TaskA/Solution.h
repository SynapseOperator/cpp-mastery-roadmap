#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
using std::vector;

class Solution {
private:
    vector<int> nums;

public:
    Solution(const vector<int>& input);
    vector<int> twoSum(int target);
};

#endif // SOLUTION_H

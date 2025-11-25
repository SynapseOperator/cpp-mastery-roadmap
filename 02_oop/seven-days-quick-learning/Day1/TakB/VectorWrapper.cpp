#include "VectorWrapper.h"
#include <iostream>

VectorWrapper::VectorWrapper() {}

void VectorWrapper::add(int x) {
    data.push_back(x);  // 向向量添加元素
}

bool VectorWrapper::remove(int x) {
    for (auto it = data.begin(); it != data.end(); ++it) {
        if (*it == x) {
            data.erase(it);  // 删除元素
            return true;
        }
    }
    return false;  // 如果没有找到元素，返回 false
}

int VectorWrapper::find(int x) const {
    for (int i = 0; i < (int)data.size(); i++) {
        if (data[i] == x) return i;  // 返回元素的下标
    }
    return -1;  // 找不到元素时返回 -1
}

void VectorWrapper::print() const {
    for (int x : data) {
        std::cout << x << " ";  // 打印每个元素
    }
    std::cout << std::endl;
}

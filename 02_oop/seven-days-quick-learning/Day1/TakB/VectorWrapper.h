#ifndef VECTOR_WRAPPER_H
#define VECTOR_WRAPPER_H

#include <vector>
using std::vector;

class VectorWrapper {
private:
    vector<int> data;  // 内部存储数据

public:
    VectorWrapper();    // 构造函数
    void add(int x);    // 向向量添加元素
    bool remove(int x); // 删除指定元素
    int find(int x) const;  // 查找元素，返回下标
    void print() const;      // 打印所有元素
};

#endif // VECTOR_WRAPPER_H

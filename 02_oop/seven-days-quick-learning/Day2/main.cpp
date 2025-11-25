#include <iostream>

#include "MyArray.h"

int main() {
  std::cout << "=== 创建 a ===" << std::endl;
  MyArray a(5);
  for (int i = 0; i < 5; i++) a.set(i, i + 1);
  a.print();

  std::cout << "\n=== 用拷贝构造创建 b(a) ===" << std::endl;
  MyArray b = a;  // 调用拷贝构造
  b.print();

  std::cout << "\n=== 创建 c（长度3） ===" << std::endl;
  MyArray c(3);
  c.print();

  std::cout << "\n=== 使用拷贝赋值运算 c = a ===" << std::endl;
  c = a;  // 调用 operator=
  c.print();

  std::cout << "\n=== 测试自我赋值 c = c ===" << std::endl;
  c = c;

  std::cout << "\n=== 程序结束，所有对象进入析构 ===" << std::endl;

  std::cout << "\n=== 测试 operator[] ===" << std::endl;
  for (int i = 0; i < 5; ++i) a[i] = i * 10;
  a.print();

  std::cout << "\n=== 测试 insert ===" << std::endl;
  a.insert(2, 999);  // 在下标2插入999
  a.print();

  std::cout << "\n=== 测试 erase ===" << std::endl;
  a.erase(3);  // 删除下标3
  a.print();

  return 0;
}

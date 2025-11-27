#include <iostream>
#include <vector>
#include <memory>

#include "Circle.h"
#include "Rect.h"
#include "Shape.h"
#include "Triangle.h"
using namespace std;

unique_ptr<Shape> createShapeFromUser();
void menu(vector<unique_ptr<Shape>>& shapes);  // 注意这里要传引用

int main() {
  vector<unique_ptr<Shape>> shapes;
  menu(shapes);


  return 0;
}

unique_ptr<Shape> createShapeFromUser() {
  cout << "请选择图形类型：\n";
  cout << "1. Circle\n";
  cout << "2. Rect\n";
  cout << "3. Triangle\n";
  cout << "输入选项: ";
  int op;
  cin >> op;

  if (op == 1) {
    double r = 0;
    cout << "请输入半径: ";
    cin >> r;
    return make_unique<circle>(r);
  } else if (op == 2) {
    double w, h;
    cout << "请输入宽 w 和高 h: ";
    cin >> w >> h;
    return make_unique<rect>(w, h);
  } else if (op == 3) {
    double a, b, c;
    cout << "请按顺序输入三边 a b c: ";
    cin >> a >> b >> c;
    return make_unique<triangle>(a, b, c);
  } else {
    cout << "无效选项\n";
    return nullptr;
  }
}

void menu(vector<unique_ptr<Shape>>& shapes) {  // 这里也要是引用
  while (true) {
    cout << "\n=== Shape Manager ===\n";
    cout << "1. 新建图形\n";
    cout << "2. 列出所有图形\n";
    cout << "3. 计算总面积\n";
    cout << "0. 退出\n";
    cout << "请选择: ";

    int choice;
    cin >> choice;

    if (choice == 0) {
      break;
    } else if (choice == 1) {
      unique_ptr<Shape> p = createShapeFromUser();
      if (p) shapes.push_back(std::move(p));  // 防止 nullptr
    } else if (choice == 2) {
      if (shapes.empty()) {
        cout << "当前没有任何图形\n";
      } else {
        for (int i = 0; i < (int)shapes.size(); ++i) {
          cout << "#" << i << " " << shapes[i]->name()
               << ", area = " << shapes[i]->area() << endl;
          shapes[i]->draw();
        }
      }
    } else if (choice == 3) {
      double areaSum = 0;
      for (auto& p : shapes) {
        areaSum += p->area();
      }
      cout << "总面积 = " << areaSum << endl;
    } else {
      cout << "无效选项\n";
    }
  }
}

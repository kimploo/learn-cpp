#include <iostream>
using namespace std;

// 참조 변수는 참조 대상을 변경할 수 없다
int main() {
  int a = 10, b = 20;
  int &aRef = a;
  cout << aRef << endl;
  aRef = 100;
  aRef = b;
  cout << aRef << endl;
}
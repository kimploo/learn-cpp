#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 100;
  int *ptr = &a;
  cout << "ptr이 가리키는 곳의 값: " << *ptr << endl;
  *ptr = 20;
  cout << "변수 a의 값: " << a << endl;
  // because *ptr is used to access the value stored at the memory location ptr is pointing to
  // *ptr은 주소가 가리키고 있는 실제 공간을 가리킨다. 
  // ptr은 주소값을 말한다.
  ptr = &b;
  cout << "변수 b의 값: " << *ptr << endl;
  return 0;
}
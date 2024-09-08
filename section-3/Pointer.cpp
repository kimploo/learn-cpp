/**
 * 포인터 변수의 크기는 컴퓨터의 word 크기에 따라 다르다
 * 32비트 컴퓨터 -> 포인터 변수의 크기는 32비트
 * 64비트 컴퓨터 -> 포인터 변수의 크기는 64비트
 * 옛날에는 4GB 이상 인식을 못했다.
 */
#include <iostream>
using namespace std;
 
int main() {
  int a;
  int *iPtr = &a; // a의 주소값을 포인터 변수에 할당해 주세요
  cout << *iPtr << endl;
  *iPtr = 10;
  cout << *iPtr;
}
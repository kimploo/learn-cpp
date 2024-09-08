#include <iostream>
using namespace std;

int main() {
  // 변수 선언 및 초기화
  int a = 10, b = 100;
 
  // 포인터 ptr을 선언한 후에 a의 주소를 넣는다.
  int *ptr = &a;
  
  // *ptr 출력 (*ptr은 ptr(주솟값)에 실제 있는 값)  
  cout << "ptr이 가리키는 곳의 값 : " << *ptr << endl;
  
  // ptr이 가리키는 곳에 20을 저장
  *ptr = 20;
  
  // 변수 a의 값 출력 + new line 추가
  cout << "변수 a의 값 : " << a << endl;
  
  // ptr이 b를 가리키게 함 -> ptr에 b의 주소값을 할당
  ptr = &b; 
  
  cout << "변수 b의 값 : " << *ptr << endl;
  return 0;
}

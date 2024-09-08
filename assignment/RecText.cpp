#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 20;

  // a를 참조하는 참조 변수 aRef를 선언
  int& aRef = a;

  // a와 aRef가 참조하는 값을 출력 (같음), 이후 new line 글자를 더 추가
  cout << "a의 값 : " << a << endl;
  cout << "aRef가 참조하는 값 : " << aRef << endl << endl;

  // 참조 변수를 통해 a의 값을 변경
  aRef = 100;  
  
  // a의 값을 출력
  cout << "a의 값 : " << a << endl;
  
  // 참조 변수를 통해 a에 b의 값을 할당
  aRef = b;    
  
  // a의 값을 출력
  cout << "a의 값 : " << a << endl;

  return 0;
}

/**
 * 1. FirstStep.cpp
 * 5행을 다음과 같이 작성할 수 있도록 수정하라.
 * `cout << "나의 첫 번째 C++ 프로그램" << endl;`
 */

// 입출력 라이브러리 iostream
#include <iostream> 
// 특정 네임스페이스를 기본 네임스페이스로 포함시켜서, std 중복 입력을 생략 가능
using namespace std;  

int main() {
  /**
   * std::cout (character output) 표준 출력 스트림
   * std::endl (end line) new line 문자 \n를 넣어줌
   * << 삽입 연산자 (insertion operator)
   */
   
  // 콘솔에 문자열 출력하고 줄을 바꿈 (endl은 줄바꿈 역할) 
  cout << "나의 첫 번째 C++ 프로그램" << endl;
}

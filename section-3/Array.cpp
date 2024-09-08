
/**
 * 배열
 * - 동일한 자료형의 값을
 * - 주기억장치의 연속적으로 할당된 공간에 저장
 * - zero index
 * 
 * 2차원 배열 -> 역시 연속적으로 할당된 공간에 저장됨
 */
#include <iostream>
using namespace std;
 
int main() {
  float fArray[4];
  int i = 0;
  fArray[i] = 10.0f;
  cin >> fArray[1] >> fArray[2] >> fArray[3];
  cout << fArray[1] * fArray[2];
}

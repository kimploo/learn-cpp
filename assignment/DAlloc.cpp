#include <iostream>
using namespace std;

int main() {
  int *intPtr;
  // 4개의 int 값을 저장할 메모리 할당
  intPtr = new int[4];

  // 값을 할당
  *intPtr = 10;           // 첫 번째 요소
  *(intPtr + 1) = 20;     // 두 번째 요소
  intPtr[2] = 30;         // 세 번째 요소
  intPtr[3] = 40;         // 네 번째 요소

  // p가 가리키는 곳의 값을 출력한 후 p를 다음으로 이동
  for (int *p = intPtr, i = 0; i < 4; i++) {
    cout << *p << " ";   // p가 가리키는 값을 출력
    p++;                 // p를 다음 요소로 이동
  }

  cout << endl;

  // ㈁ ㈀에서 할당한 메모리 반환
  delete[] intPtr;
  return 0;
}

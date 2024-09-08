/**
 * 2. FindMaxInArr.cpp
 * 10개의 값이 저장된 배열에서 최댓값 구하기
 */

#include <iostream>
using namespace std;
 
int main() {
  int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
  
  // data의 첫 번째 데이터를 max로 가정함
  int max = data[0]; 
  
  // 0번 데이터 출력
  cout << "데이터 : " << data[0]; 
  
  // 나머지 9개의 데이터 비교
  for (int i = 1; i < 10; i++) {  
    // i번 데이터 출력
    cout << " " << data[i];
    
    // i번 데이터가 max보다 크면 비교
    if (max < data[i]) {
      // max를 i번 데이터로 바꿈 
      max = data[i];
    }
  }
  
  cout << endl << endl;
  // 배열의 최댓값 출력
  cout << "배열의 최댓값 : " << max << endl;
  return 0;
}

int main() {
  // 변수 선언
  int size;
  int size, price, stock;
  
  // 변수 초기화
  int total = 0;
  int total(0);
  // 아래 두 코드는 1로 초기화
  int x(1.5); // 실수 -> 정수
  float y = x; 
  int total = {0};
  // 오류
  // short x{total};
  
  // 자료형 추론
  auto i(10); // int i(10); 과 동일함
  // 변경할 수 없는 변수
  const double PI {3.14159}; // 원주율 정의

}
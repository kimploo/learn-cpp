#include <iostream>

// using 키워드로 std를 생략할 수 있다.
using namespace std;

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }

int a = 30;
namespace NameSpace1 { int b = 50; }

int main() {
  int a = 40;
  cout << NameSpace1::a << endl;
  cout << NameSpace2::a << endl;
  // 전역 명칭공간 (global namespace)의 a
  cout << ::a << endl;
  cout << a << endl;
  //  지역 명칭공간, main()의 명칭공간 (local namespace)의 a   cout << a << endl;
  cout << NameSpace1::b << endl;
  return 0;
}


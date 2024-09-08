#include <iostream>

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }

int a = 30;
namespace NameSpace1 { int b = 50; }

int main() {
  int a = 40;
  std::cout << NameSpace1::a << std::endl;
  std::cout << NameSpace2::a << std::endl;
  // 전역 명칭공간 (global namespace)의 a
  std::cout << ::a << std::endl;
  //  지역 명칭공간, main()의 명칭공간 (local namespace)의 a   std::cout << a << std::endl;
  std::cout << NameSpace1::b << std::endl;
  return 0;
}


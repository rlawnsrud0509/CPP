#include <iostream>
using namespace std;

int main() {

  int a, b, c;

  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  b += c;

  while (b >= 60) {
    b -= 60;
    a++;
  }

  std::cout << a % 24 << " " << b;

  return 0;
}
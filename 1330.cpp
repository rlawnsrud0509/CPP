#include <iostream>
using namespace std;

int main() {

  int a, b;

  std::cin >> a;
  std::cin >> b;

  if(a > b) {
    std::cout << ">";
  }
  else if(a < b) {
    std::cout << "<";
  }
  else {
    std::cout << "==";
  }
  return 0;
}
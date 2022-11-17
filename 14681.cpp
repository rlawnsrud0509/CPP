#include <iostream>
using namespace std;

int main() {

  int a, b;
  std::cin >> a;
  std::cin >> b;

  if(a>0 && b>0) {
    std::cout << "1";
  }
  if(a<0 && b>0) {
    std::cout << "2";
  }
  if(a<0 && b<0) {
    std::cout << "3";
  }
  if(a>0 && b<0) {
    std::cout << "4";
  }
  
  return 0;
}
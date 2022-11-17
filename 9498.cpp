#include <iostream>
using namespace std;

int main() {

  int a;

  std::cin >> a;

  if(a>89) {
    std::cout << "A";
  }
  else if (a>79) {
    std::cout << "B";
  }
  else if(a>69) {
    std::cout << "C";
  }
  else if(a>59) {
    std::cout << "D";
  }
  else {
    std::cout << "F";
  }
  
  return 0;
}
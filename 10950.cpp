#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  
  std::cin >> c;

  for(int i =0; i<c; i++){
    std::cin >> a;
    std::cin >> b;
    std::cout << a+b << "\n";
  }
  return 0;
}
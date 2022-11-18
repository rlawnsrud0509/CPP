#include <iostream>
using namespace std;

int main() {

  int a, c=0;
  
  std::cin >> a;

  for(int i =1; i<=a; i++){
      c+=i;
  }

  std::cout << c;
  return 0;
}
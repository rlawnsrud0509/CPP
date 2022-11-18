#include <iostream>
using namespace std;

int main() {

  int z, a, b, c, sum=0;

  std::cin >> z;
  std::cin >> a;

  for(int i=0; i<a; i++) {
    std::cin >> b;
    std::cin >> c;
    sum+=b*c;
  }

  if(z==sum) {
    std::cout << "Yes";
  }
  else {
    std::cout << "No";
  }
  
  return 0;
}
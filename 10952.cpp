#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;

  while(1) {
    std::cin >> a;
    std::cin >> b;
    
    if(a==0 && b==0) {
      break;
    }
    std::cout << a+b << "\n";
  }
  
  return 0;
}
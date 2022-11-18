#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a;
  
  std::cin >> a;

  for(int i=1; i<=a; i++) {
    for(int j=0; j<i; j++) {
        std::cout << "*";
    }
    std::cout << "\n";
  }
  
  return 0;
}
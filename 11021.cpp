#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c;
  
  std::cin >> a;

  for(int i=1; i<=a; i++) {
    std::cin >> b;
    std::cin >> c;
    std::cout << "Case #" << i << ": " << b+c << "\n";
  }
  
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, c=0;
  
  std::cin >> a;

  for(int i =1; i<=a; i++){
      c+=i;
  }

  std::cout << c;
  return 0;
}
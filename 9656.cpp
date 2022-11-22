#include <iostream>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout << fixed;

  int a;
  cin >> a;
  a%2==1?cout<<"CY":cout<<"SK";

  return 0;
}
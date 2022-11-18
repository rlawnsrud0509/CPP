#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, s, cnt=1;

  cin >> a;
  if(a<10) {
    a*=10;
  }
  s=(a%10)*10 + (a/10+a%10)%10;

  while(1) {
    
    if(s == a) {
      break;
    }

    s = (s%10)*10 + (s/10+s%10)%10;
    
    cnt++;
    
  }

  cout << cnt;
  
  return 0;
}
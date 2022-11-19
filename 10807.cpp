#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, cnt=0;
  cin >> a;
  
  int arr[100];
  for(int i=0; i<a; i++) {
    cin >> arr[i];
  }

  cin >> b;
  for(int i=0; i<a; i++) {
    if(arr[i]==b) {
      cnt++;
    }
  }

  cout << cnt;
  
  return 0;
}
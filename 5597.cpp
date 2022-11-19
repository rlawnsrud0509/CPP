#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int arr[31]={}, a;
  for(int i=0; i<28; i++) {
    cin >> a;
    arr[a]=1;
  }

  for(int i=1; i<31; i++) {
    if(arr[i]!=1) {
      cout << i << "\n";
    }
  }

  
  return 0;
}
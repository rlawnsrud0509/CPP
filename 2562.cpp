#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int max=0, pos=0;
  
  int arr[9];
  for(int i=0; i<9; i++) {
    cin >> arr[i];
    if(arr[i]>=max) {
      max = arr[i];
      pos=i+1;
    }
  }

  cout << max << "\n" << pos;

  
  return 0;
}
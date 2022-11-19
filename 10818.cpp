#include <iostream>
using namespace std;


int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, max, min;
  cin >> a;
  
  int arr[1000000];
  for(int i=0; i<a; i++) {
    cin >> arr[i];
  }

  max=arr[0];
  min=arr[0];

  for(int i=1; i<a; i++) {
    if(arr[i]<min) {
      min = arr[i];
    }
    if(arr[i]>max) {
      max = arr[i];
    }
  }

  cout << min << " " << max;

  
  return 0;
}
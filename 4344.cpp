#include <iostream>
#include <string.h>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout << fixed;

  int a, b, sum, arr[1000];
  double avg, per;

  cin >> a;

  for(int i=0; i<a; i++) {
    sum=0;
    per=0;
    cin >> b;
    for(int j=0; j<b; j++){
      cin >> arr[j];
      sum+=arr[j];
    }
    avg = sum/b;
    for(int j=0; j<b; j++) {
      if(arr[j] > avg) {
        per+=(float)100/b;
      }
    }
    cout.precision(3);
    cout << per << "%\n";
  }

  return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, rep;
  char arr[21];

  cin >> a;

  for(int i=0; i<a; i++) {
    cin >> rep;
    cin >> arr;

    for(int j=0; j < strlen(arr); j++) {
      for(int k=0; k<rep; k++) {
        cout << arr[j];
      }
    }
    cout << "\n";
  }

  return 0;
}
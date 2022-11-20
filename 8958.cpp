#include <iostream>
#include <string.h>

using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, cnt = 1, sum = 0;
  char arr[80] = {};
  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> arr;
    for (int j = 0; j < strlen(arr); j++) {
      if (arr[j] == 'O') {
        sum += cnt;
        cnt++;
      }
      if (arr[j] != 'O') {
        cnt = 1;
      }
    }
    cout << sum << "\n";
    sum = 0;
    cnt = 1;
  }

  return 0;
}
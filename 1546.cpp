#include <iostream>
 
using namespace std;
 
int main() {

	int a, max=0;
  float s=0, arr[1000];

  cin >> a;
  for(int i=0; i<a; i++) {
    cin >> arr[i];
    if(arr[i]>max) {
      max=arr[i];
    }
  }

  for(int i=0; i<a; i++) {
    arr[i]=(arr[i]/max)*100;
    s+=arr[i];
  }
  

  cout << s/a;
  
	return 0;
 
 
}

#include <iostream>

using namespace std;

int main() {
  
  double sum=0, a, max=0;
  
  cin >> a;
  double arr[int(a)];

  for(int i=0; i<a; i++) {
    cin >> arr[i];
  }

  for(int i=0; i<a; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }

  for(int i=0; i<a; i++) {
    sum+= arr[i]/max*100;
  }

  cout << sum/a;
  
}
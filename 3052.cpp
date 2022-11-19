#include <iostream>
 
using namespace std;
 
int main() {

	int cnt[42] = {};	
	
	int v;
	for(int i=0; i<10; i++) {
		cin >> v;
		cnt[v%42]++;	
	}
 
	int res = 0;

	for(int v : cnt) {
		if(v > 0) {		
			res++;
		}
	}
	cout << res;
 
	return 0;
 
 
}
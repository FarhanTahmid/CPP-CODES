#include <iostream>
using namespace std;
 
int main() {
	int n = 10 ;
	int a[10];
 
	for(int i = 0 ;i<n ;i++) {
		cin >> a[i];
		if(a[i]%2){
			a[i] = a[i]*a[i];
		}
	}
		for(int i = 0 ; i<n ; i++){
		for(int j = 0 ; j < n;j++){
			if(a[i]<a[j]){
				int y = a[j];
				a[j]= a[i];
				a[i] = y ;
			}
		}
	}
 
	for(int i = 0 ;i<n;i++) cout << a[i] << " ";
 
	return 0;
}
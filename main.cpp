#include<bits/stdc++.h>
using namespace std;

void nTriangle(int n);




void nTriangle(int n) {
	// Write your code here
	if (n>=1 || n<=25){
		for (int i = 0 ; i<n; i++){
			for (int j=0 ; j<=i ; j++)
			cout << i+1 << " ";
			cout << "\n";
		}
	}
}int main() {
    int n;
    cin >> n;
    nTriangle(n);
    return 0;
}
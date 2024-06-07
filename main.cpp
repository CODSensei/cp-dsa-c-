#include<bits/stdc++.h>
using namespace std;

void nTriangle(int n);




void nTriangle(int n) {
	// Write your code here
	if (n>=1 || n<=25){
		for (int i = n ; i>0; i--){
			for (int j=i ; j>0 ; j--)
			cout << "*" << " ";
			cout << "\n";
		}
	}
}int main() {
    int n;
    cin >> n;
    nTriangle(n);
    return 0;
}
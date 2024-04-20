#include<bits/stdc++.h>
using namespace std;

int F(int n){
    if (n==1)
    return 1;
    else if (n==2)
    return 1;
    return F(n-1) + F(n-2);
}

int main() {
    int n;
    cin >> n;
    if (n>=1 || n<=10000)
        cout << F(n);
}
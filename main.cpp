#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >>y;
    cout <<" Numbers before swap " << x << "\t"<<y<<endl;
    int t = x;
    x=y;
    y=t;
    cout <<" Numbers after swap " << x << "\t"<<y;
     


}
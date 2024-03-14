#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter your coefficients" << endl;
    cin >> a>>b>>c;
    int d = b*b - 4*a*c;
    if (d<0){
    cout << "Roots are imaginary" << endl;
    }
    else if (d==0)
    {
        int root = (-b)/2*a;
        cout << "Roots are equal and real" << endl << "Root is " << root;
        
    }
    else {
        int dis = sqrt(d);
        int root1 = ((-b) + dis)/(2*a);
        int root2 = ((-b) - dis)/(2*a);
        cout << "Roots are real and unequal"<<endl << "Roots are " << root1 << "and" <<root2;

    }
    
    
}
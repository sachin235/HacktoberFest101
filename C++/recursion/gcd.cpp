#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}

int main() {
    int x, y;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<"GCD of "<< x <<" and "<< y <<" is "<< gcd(x, y)<<endl;
    return 0;
}

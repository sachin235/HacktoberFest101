#include<bits/stdc++.h>
using namespace std;
 
long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
 
int main() {
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

// Print first m N-bonacci numbers

/*
    Example:
    N=3, M=8
    output: 0 0 1 1 2 4 7 13 
*/

#include<iostream>
using namespace std;

void n_bonacci(int n, int m)
{
    int n_bonacci[m]={0};
    int next_term = 1;

    n_bonacci[n-1] = 1;
    for(int i=n; i<m; i++)
    {
        n_bonacci[i]=next_term;
        next_term += next_term-n_bonacci[i-n];
    }

    // printing
    for(int i=0; i<m; i++)
        cout<<n_bonacci[i]<<", ";
    cout<<endl;
}

int main()
{
    n_bonacci(3,8);
    n_bonacci(4,10);
    return 0;
}
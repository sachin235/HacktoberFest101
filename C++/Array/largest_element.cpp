#include<iostream>
using namespace std;

int max(int *arr, int n)
{
    int m=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[m])
            m=i;
    }
    return m;
}

int main()
{
    int arr[] = {40,8,50,100,45};
    int len = 5;
    cout<<max(arr, len)<<endl;
    return 0;
}
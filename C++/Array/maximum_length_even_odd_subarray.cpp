#include<iostream>
using namespace std;

int longestEvenOdd(int *arr, int n)
{
    int res=1, curr_count=1;
    for(int i=1; i<n; i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
            curr_count++;
        else
            curr_count = 1;

        res = max(curr_count, res);
    }
    return res;
}

int main()
{
    int arr1[]={10,12,14,7,8};
    cout<<longestEvenOdd(arr1, 6)<<endl;

    int arr2[]={7,10,13,14};
    cout<<longestEvenOdd(arr2, 4)<<endl;

    int arr3[]={10,12,8,4};
    cout<<longestEvenOdd(arr3, 4)<<endl;
    return 0;
}
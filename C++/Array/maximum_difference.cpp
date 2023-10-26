// we need to find the maximum difference between 
// arr[j]-arr[i] such that j>i

#include<iostream>
using namespace std;

/*
    Efficient Solution: O(n)
    we traverse from left to right
    1. we keep track of minimum element we have seen so far
    2. we subtract the nth element with minimum
       and check if differnce if greater than previous difference
*/

int max_diff(int *arr, int n)
{
    int diff=arr[1]-arr[0];
    int min_value = arr[0];
    for(int j=1; j<n; j++)
    {
        diff = max(diff, arr[j]-min_value);
        min_value = min(min_value, arr[j]);
    }
    return diff;
}

int main()
{
    int arr1[] = {2,3,10,6,4,8,1};
    int l1=7;
    cout<<max_diff(arr1, l1)<<endl;

    int arr2[] = {7,9,5,6,3,2};
    int l2=6;
    cout<<max_diff(arr2, l2)<<endl;

    int arr3[] = {10,20,30};
    int l3=3;
    cout<<max_diff(arr3, l3)<<endl;

    int arr4[] = {30,10,8,2};
    int l4=4;
    cout<<max_diff(arr4, l4)<<endl;
    return 0;
}
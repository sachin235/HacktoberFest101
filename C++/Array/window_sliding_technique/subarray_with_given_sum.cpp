// Given an unsorted array of non-negative integers. Find if there is
// a subarray with given sum.

// iportant thing to notice: non-negative integers

#include<iostream>
using namespace std;

bool isSumSubarray(int *arr, int n, int sum)
{
    int curr_sum=0;
    int start=0;

    for(int i=0; i<n; i++)
    {
        curr_sum += arr[i];

        while(curr_sum>sum && start<i)
            curr_sum -= arr[start++];
        
        if(curr_sum==sum)
            return true;
    }
    return false;
}

int main()
{
    int arr1[]={1,4,20,3,10,5};
    cout<<isSumSubarray(arr1,6,33)<<endl;
    int arr2[]={1,4,0,0,3,10,5};
    cout<<isSumSubarray(arr2,7,7)<<endl;
    int arr3[]={2,4};
    cout<<isSumSubarray(arr3,2,3)<<endl;
    return 0;
}
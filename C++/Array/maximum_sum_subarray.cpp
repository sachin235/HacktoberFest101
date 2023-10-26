#include<iostream>
using namespace std;

// Naive Solution:
/*
    We traverse through all the subarrays starting with arr[i]
    and find the maximum sum. 
*/
// int max_sum_subarray(int *arr, int n)
// {
//     int res=arr[0];
//     for(int i=0; i<n; i++)
//     {
//         int curr=0;
//         for(int j=i; j<n; j++)
//         {
//             curr=curr+arr[j];
//             res=max(res, curr);
//         }
//     }
//     return res;
// }

// Efficient Solution:
/*
    Kadane's Algorithm:
    
    We use maximum sum of sum[i-1] to determine the maximum sum of
    sum[i]. where sum[i] represent the sum of subarray that ends with 
    arr[i]th element.  
*/

int max_sum_subarray(int *arr, int n)
{
    int res, maxEnding;
    res = arr[0];
    maxEnding = arr[0];

    for(int i=1; i<n; i++)
    {
        maxEnding=max(arr[i], maxEnding+arr[i]);
        res=max(res, maxEnding);
    }
    return res;
}

int main()
{
    int arr1[]={2,3,-8,7,-1,2,3};
    cout<<max_sum_subarray(arr1, 7)<<endl;
    
    int arr2[]={5,8,3};
    cout<<max_sum_subarray(arr2, 3)<<endl;

    int arr3[]={-6,-1,-8};
    cout<<max_sum_subarray(arr3, 3)<<endl;
    return 0;
}
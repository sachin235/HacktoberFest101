/*
    Given an array of integers and a number k, find the
    maximum sum of k consecutive elements.
*/

#include<iostream>
using namespace std;

// // Naive technique
// int maxSumK(int *arr, int n, int k)
// {
//     int res=INT32_MIN;
//     for(int i=0; i+k-1<n; i++)
//     {
//         int sum=0;
//         for(int j=0; j<k; j++)
//             sum += arr[i+j];
//         res = max(sum, res);
//     }
//     return res;
// }

// Efficient Solution: O(n)
// Window sliding technique

int maxSumK(int *arr, int n, int k)
{
    int currSum=0;
    // compute the sum of first window
    for(int i=0; i<k; i++)
        currSum += arr[i];

    int maxSum=currSum;
    for(int i=k; i<n; i++)
    {
        currSum += (arr[i]-arr[i-k]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}


int main()
{
    int arr1[] = {1,8,30,-5,20,7};
    cout<<maxSumK(arr1, 6, 3)<<endl;
    int arr2[] = {5,-10,6,90,3};
    cout<<maxSumK(arr2, 5, 2)<<endl;

    return 0;
}
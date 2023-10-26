// we are given an array of non negative integers
// the values represented by array are heights of bars
// we need to find the maximum amount od water that can be collected
// between the bars

#include<iostream>
using namespace std;

// Naive Solution: O(n^2)

// int getWater(int *arr, int n)
// {
//     int res=0;
//     for (int i=1; i<n-1; i++)
//     {
//         int lMax = arr[i];
//         for(int j=0; j<i; j++)
//             lMax=max(lMax, arr[j]);
        
//         int rMax = arr[i];
//         for(int j=i; j<n; j++)
//             rMax=max(rMax, arr[j]);
        
//         res = res+min(lMax,rMax)-arr[i];
//     }
//     return res;
// }

// Efficient Solution: O(n)
/*
    Precompute the left maximum and right Maximum for each index
*/

int getWater(int *arr, int n)
{
    int res=0;
    int lMax[n], rMax[n];

    lMax[0]=arr[0];
    for(int i=1; i<n; i++)
        lMax[i] = max(lMax[i-1], arr[i]);

    rMax[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--)
        rMax[i] = max(rMax[i+1], arr[i]);

    for(int i=1; i<n-1; i++)
        res = res+ min(lMax[i],rMax[i]) - arr[i];

    return res;
}

int main()
{
    int arr1[]={2,0,2};
    int arr2[]={3,0,1,2,5};
    int arr3[]={1,2,3};
    int arr4[]={3,2,1};

    cout<<getWater(arr1,3)<<endl;
    cout<<getWater(arr2,5)<<endl;
    cout<<getWater(arr3,3)<<endl;
    cout<<getWater(arr4,3)<<endl;
    return 0;
}
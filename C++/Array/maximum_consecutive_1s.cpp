// Given a binary array, we need to count the maximum consecutive
// 1's in the given array.

#include<iostream>
using namespace std;

int max_consecutive_ones(int *arr, int n)
{
    int max_count=0, curr_count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            curr_count=0;
        else
        {
            curr_count++;
            max_count=max(curr_count, max_count);
        }
    }
    return max_count;
}

int main()
{
    int arr1[]={0,1,1,0,1,0};
    cout<<max_consecutive_ones(arr1, 6)<<endl;

    int arr2[]={1,1,1,1};
    cout<<max_consecutive_ones(arr2, 4)<<endl;

    int arr3[]={0,0,0};
    cout<<max_consecutive_ones(arr3, 3)<<endl;

    int arr4[]={1,0,1,1,1,1,0,1,1};
    cout<<max_consecutive_ones(arr4, 9)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

bool is_sorted(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}

int main()
{
    int arr1[]={8,12,15};
    int arr2[]={8,10,10,12};
    int arr3[]={100};
    int arr4[]={100,20,200};
    cout<<is_sorted(arr1, 3)<<endl;
    cout<<is_sorted(arr2, 4)<<endl;
    cout<<is_sorted(arr3, 1)<<endl;
    cout<<is_sorted(arr4, 3)<<endl;
    return 0;
}
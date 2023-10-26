// an element n is called leader in an array if there are 
// no element greater than n towards the right

#include<iostream>
using namespace std;

void print_leaders(int *arr, int n)
{
    int max = INT32_MIN;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]>max)
        {
            cout<<arr[i]<<", ";
            max = arr[i];
        }
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {7,10,4,3,6,5,2};
    int l1=7;
    print_leaders(arr1, l1);

    int arr2[] = {10,20,30};
    int l2=3;
    print_leaders(arr2, l2);

    int arr3[] = {10,20,30};
    int l3=3;
    print_leaders(arr1, l1);
    return 0;
}
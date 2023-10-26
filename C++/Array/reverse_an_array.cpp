#include<iostream>
using namespace std;

void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<", ";
    cout<<endl;
}

void reverse(int *arr, int n)
{
    for(int i=0; i<n/2; i++)
        swap(arr[i], arr[n-i-1]);
}

int main()
{
    int arr1[] = {10,5,7,30};
    int l1=4;
    reverse(arr1,l1);
    cout<<"Array 1:- "<<endl;
    display(arr1,l1);

    int arr2[] = {30,20,5};
    int l2=3;
    reverse(arr2,l2);
    cout<<"Array 2:- "<<endl;
    display(arr2,l2);

    return 0;
}
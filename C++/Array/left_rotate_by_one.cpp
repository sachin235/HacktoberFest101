#include<iostream>
using namespace std;

void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<", ";
    cout<<endl;
}

void left_rotate(int *arr, int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int l1=5;
    left_rotate(arr1,l1);
    cout<<"Array 1:- "<<endl;
    display(arr1,l1);

    int arr2[] = {30,5,20};
    int l2=3;
    left_rotate(arr2,l2);
    cout<<"Array 2:- "<<endl;
    display(arr2,l2);

    return 0;
}
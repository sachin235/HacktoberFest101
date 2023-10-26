#include<iostream>
using namespace std;

void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<", ";
    cout<<endl;
}

void move_zeros_end(int *arr, int n)
{
    int count=0, i;
    for(i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr1[] = {8,5,0,10,0,20};
    int l1=6;
    move_zeros_end(arr1,l1);
    cout<<"Array 1:- "<<endl;
    display(arr1,l1);

    int arr2[] = {0,0,0,10,0,0};
    int l2=6;
    move_zeros_end(arr2,l2);
    cout<<"Array 2:- "<<endl;
    display(arr2,l2);

    int arr3[] = {10,20};
    int l3=2;
    move_zeros_end(arr3,l3);
    cout<<"Array 3:- "<<endl;
    display(arr3,l3);

    return 0;
}
#include<iostream>
using namespace std;

void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<", ";
    cout<<endl;
}

int remove_duplicates(int *arr, int n)
{
    int k=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[k-1])
            arr[k++]=arr[i];
    }
    return k;
}

int main()
{
    int arr1[] = {10,20,20,30,30,30,30};
    int l1=7;
    l1 = remove_duplicates(arr1,l1);
    cout<<"Array 1:- "<<endl;
    display(arr1,l1);

    int arr2[] = {10,10,10};
    int l2=3;
    l2 = remove_duplicates(arr2,l2);
    cout<<"Array 2:- "<<endl;
    display(arr2,l2);

    return 0;
}
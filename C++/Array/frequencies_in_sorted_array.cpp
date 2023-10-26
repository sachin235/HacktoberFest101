
#include<iostream>
using namespace std;

void frequencies(int *arr, int n)
{
    int count=1, i;
    for(i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
            count++;
        else
        {
            cout<<arr[i-1]<<" appears "<<count<<" times"<<endl;
            count =1;
        }
    }
    cout<<arr[n-1]<<" appears "<<count<<" times"<<endl;
}

int main()
{
    int arr1[] = {10,10,10,25,30,30};
    int l1=6;
    frequencies(arr1,l1);

    int arr2[] = {10,10,10,10};
    int l2=4;
    frequencies(arr2,l2);

    int arr3[] = {10,20,30};
    int l3=3;
    frequencies(arr3,l3);

    int arr4[] = {40,50,50,50};
    int l4=4;
    frequencies(arr4,l4);
    return 0;
}
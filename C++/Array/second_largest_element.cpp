#include<iostream>
using namespace std;

int second_largest(int *arr, int n)
{
    int largest = 0, second_largest=-1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[largest])
        {
            second_largest = largest;
            largest = i;
        }
        else if((second_largest==-1 || arr[i]>arr[second_largest]) && arr[i]!=arr[largest])
        {
            second_largest = i;
        }
    }
    return second_largest;
}

int main()
{
    int arr1[] = {20,10,20,8,12};
    int len1=5;
    cout<<second_largest(arr1, len1)<<endl;
    int arr2[] = {10, 10, 10};
    int len2=3;
    cout<<second_largest(arr2, len2)<<endl;
    return 0;
}
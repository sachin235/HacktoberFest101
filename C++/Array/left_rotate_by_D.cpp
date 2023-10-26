#include<iostream>
using namespace std;

void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<", ";
    cout<<endl;
}

// Naive method : 
// time complexity = O(nd)
void left_rotate_one(int *arr, int n)
{
    int temp=arr[0];
    for(int i=1; i<n; i++)
        arr[i-1]=arr[i];
    arr[n-1] = temp;
}

void leftRotate1(int *arr, int n, int d)
{
    for(int i=0; i<d; i++)
        left_rotate_one(arr, n);
}

// semi efficientt method :
// time complexity = O(n)
// space complexity = O(d)

void leftRotate2(int *arr, int n, int d)
{
    int temp[d], i;
    for(i=0; i<d; i++)
        temp[i]=arr[i];
    for(i=d; i<n; i++)
        arr[i-d]=arr[i];
    for(i=0; i<d; i++)
        arr[n-d+i]=temp[i];
}

// Efficient Solution:
// Time complexity: O(n)
// Space Complexity: O(1)
/*
    Reversal Algorithm:
    1. reverse first d elements
    2. reverse remaining n-d elements
    3. reverse the whole array
*/
void reverse(int *arr, int low, int high)
{
    while(low<high)
    {
        swap(arr[low++], arr[high--]);
    }
}

void leftRotate3(int *arr, int n, int d)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int l1=5 , d1=2;
    leftRotate1(arr1, l1, d1);
    display(arr1, l1);

    int arr2[]={1,2,3,4,5};
    int l2=5 , d2=2;
    leftRotate2(arr2, l2, d2);
    display(arr2, l2);

    int arr3[]={1,2,3,4,5};
    int l3=5 , d3=2;
    leftRotate3(arr3, l3, d3);
    display(arr3, l3);
    return 0;
}
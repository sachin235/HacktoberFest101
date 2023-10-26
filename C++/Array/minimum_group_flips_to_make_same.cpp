/*
    Given a binary array, we need to convert this array into an array that either contains 
    all 1s or all 0s.  We need to do it using the minimum number of group flips. 

    Input : arr[] = {1, 1, 0, 0, 0, 1}
    Output :  From 2 to 4
    Explanation : We have two choices, we make all 0s or do all 1s.  We need to do two group 
    flips to make all elements 0 and one group flip to make all elements 1.  Since making all 
    elements 1 takes least group flips, we do this.
*/

#include<bits/stdc++.h>
using namespace std;

/*
    Idea:

    The difference between the number of groups of 0's and 1's will be 1
    If it start with 0 or 1 and ends with the same number then the group which starts the array
    is one more in the array.
    110011 (G1's=2, G0's=1)

    Else if array starts with 0 or 1 and ends with the other number then difference between the number
    of groups will be 0.
    00110011 (G1's=2, G0's=2)

    Either way the group that is minimum in number or equal appears froup group no 2
    so we can change the element that appears in group 2
*/
void minimumGroupFlips(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<(i-1)<<endl;
        }
    }

    if(arr[n-1]!=arr[0])
        cout<<(n-1)<<endl;
}

int main()
{
    int arr1[]={1,1,0,0,0,1};
    minimumGroupFlips(arr1, 6);
    cout<<endl;

    int arr2[]={1,0,0,0,1,0,0,1,1,1,1};
    minimumGroupFlips(arr2, 11);
    cout<<endl;

    int arr3[]={1,1,1};
    minimumGroupFlips(arr3, 3);
    cout<<endl;

    int arr4[]={0,1};
    minimumGroupFlips(arr4, 2);
    cout<<endl;

    return 0;
}
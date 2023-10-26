// An element is said to be majority if it appears
// more than n/2 times in that array

#include<iostream>
using namespace std;

// // Naive approach: O(n^2)
// int majorityElement(int *arr, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]!=-1)
//         {
//             int count=1;
//             for(int j=i+1; j<n; j++)
//             {
//                 if(arr[j]==arr[i])
//                 {
//                     count++;
//                     arr[j]=-1;
//                 }
//             }

//             if(count>n/2)
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }

// Efficient Solution: O(n)
/*
    Moore's Voting algorithm

    This algorithm works on the fact that if an element occurs more than N/2 times, it means 
    that the remaining elements other than this would definitely be less than N/2. So let us 
    check the proceeding of the algorithm.

    This algorithm works in two steps
    First, choose a candidate from the given set of elements if it is the same as the candidate 
    element, increase the votes. Otherwise, decrease the votes if votes become 0, select another 
    new element as the new candidate.
*/

int majorityElement(int *arr, int n)
{
    int res=0, count=1;

    // Find a candidate
    for(int i=1; i<n; i++)
    {
        if(arr[res]==arr[i])
            count++;
        else
            count--;

        if(count == 0)
        {
            res=i;
            count=1;
        }
    }

    // check if the candidate is actually a majority
    count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[res]==arr[i])
            count++;
    }
    if(count<=n/2)
        res=-1;
    return res;
}

int main()
{
    int arr1[] = {8,3,4,8,8};
    cout<<majorityElement(arr1, 5)<<endl;
    
    int arr2[] = {3,7,4,7,7,5};
    cout<<majorityElement(arr2, 6)<<endl;
    
    int arr3[] = {20,30,40,50,50,50,50};
    cout<<majorityElement(arr3, 7)<<endl;

    return 0;
}
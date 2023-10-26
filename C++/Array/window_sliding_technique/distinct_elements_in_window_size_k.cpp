// Given an array, we need to count the number of distinct elements
// in every window of size k

#include<bits/stdc++.h>
using namespace std;

void distinct_elements_window(int *arr, int n, int k)
{
    unordered_map<int,int> hm;
    int dist_count = 0;

    for(int i=0; i<k; i++)
    {
        hm[arr[i]]++;
        if(hm[arr[i]]==1)
            dist_count++;
    }
    cout<<dist_count<<", ";

    for(int i=k; i<n; i++)
    {
        hm[arr[i-k]]--;
        if(hm[arr[i-k]]==0)
            dist_count--;

        hm[arr[i]]++;
        if(hm[arr[i]]==1)
            dist_count++;
        
        cout<<dist_count<<", ";
    }
    cout<<endl;
}

int main()
{
    int arr1[]={1,2,1,3,4,3,3};
    distinct_elements_window(arr1, 7, 4);
    int arr2[]={1,2,3,4,4,5,6};
    distinct_elements_window(arr2, 7, 3);
    return 0;
}
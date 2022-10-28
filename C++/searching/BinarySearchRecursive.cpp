#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int l,int u,int val)
{
    if (u >= l) {
        int mid = l+(u-l)/2;
        if (arr[mid] == val)
            return mid;
        if (arr[mid]>val)
            return binarysearch(arr, l, mid - 1, val);
        return binarysearch(arr, mid + 1, u, val);
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int target_val;
    cin>>target_val;
    int index=binarysearch(a,0,n-1,target_val);
   if(index==-1)
   cout<<"Element not found";
   else
   cout<<"Element found at position "<<index+1;
}

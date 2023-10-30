// Given the dimension of a sequence of matrices in an array arr[],
// where the dimension of the ith matrix is (arr[i-1] * arr[i]), 
// The task is to find the most efficient way to multiply these matrices together such that the total number of element multiplications is minimal.
#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int n)
{
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i+2;j<n;j++)
        {
            int x=INT_MAX;
            for(int k=i+1;k<j;k++)
            {
                int y= dp[i][k]+dp[k][j]+arr[i]*arr[k]*arr[j];
                x=min(x,y);
            }
            dp[i][j]=x;
        }
    }
    return dp[0][n-1];
}
int main()
 {
// Number of test cases to test 
	int t;
	cin>>t;
	while(t--)
	{
	      int n; // size of array
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)	
          cin>>arr[i];
        cout<<fun(arr,n)<<'\n';
	}
	return 0;
}

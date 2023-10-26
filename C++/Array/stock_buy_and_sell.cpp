#include<iostream>
using namespace std;

// Naive Solution:

// int maxProfit(int *price, int start, int end)
// {
//     if(end<=start)
//         return 0;
//     int profit=0;

//     for(int i=start; i<end; i++)
//     {
//         for(int j=i+1; j<=end; j++)
//         {
//             if(price[j]>price[i])
//             {
//                 int curr_profit = price[j]-price[i] + maxProfit(price,start,i-1) + maxProfit(price,j+1,end);
//                 profit = max(profit, curr_profit);
//             }
//         }
//     }
//     return profit;
// }

// Efficient Solution
/*
    Idea:-
    When the prices are going down we let them go down and buy when it reaches bottom point
    When the prices are going up we lwt them go up and sell it when it reaches top
    basically, we need to identify bottom and top points
*/

int maxProfit(int *prices, int n)
{
    int profit=0;
    for(int i=1; i<n; i++)
    {
        if(prices[i]>prices[i-1])
            profit += (prices[i]-prices[i-1]);
    }
    return profit;
}

int main()
{
    int arr1[]={1,5,3,8,12};
    // cout<<maxProfit(arr1,0,4)<<endl;
    cout<<maxProfit(arr1,5)<<endl;
    
    int arr2[]={30,20,10};
    // cout<<maxProfit(arr2,0,2)<<endl;
    cout<<maxProfit(arr2,3)<<endl;
    
    int arr3[]={10,20,30};
    // cout<<maxProfit(arr3,0,2)<<endl;
    cout<<maxProfit(arr3,3)<<endl;
    
    int arr4[]={1,5,3,1,2,8};
    // cout<<maxProfit(arr4,0,5)<<endl;
    cout<<maxProfit(arr4,6)<<endl;
    return 0;
}
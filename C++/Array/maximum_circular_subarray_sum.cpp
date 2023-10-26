#include<iostream>
using namespace std;

// // Naive Solution: O(n^2)

// int maxCircularSum(int *arr, int n)
// {
//     int res=arr[0];
//     for(int i=0; i<n; i++)
//     {
//         int curr_max = arr[i];
//         int curr_sum = arr[i];

//         for(int j=1; j<n; j++)
//         {
//             int index = (i+j)%n;
//             curr_sum += arr[index];
//             curr_max = max(curr_sum, curr_max);
//         }
//         res = max(res, curr_max);
//     } 
//     return res;
// }


// Efficient Solution: O(n)
// file:///C:/Users/Asus/Documents/dsa/GFG/resources/4.18.png
/*
    Idea: Take the maximum of the following two
    1. Maximum sum of natural subarray (Kadane's algorithm)
    2. Maximum sum of a circular subarray
        --> we apply the kadane's to find the minimum sum
        --> then we substract minimum sum from total sum to get the circular sum

        // To find minimum sum we can invert the array (i.e. replace arr[i] with -arr[i])
        // and find the maximum sum of that inverted array using kadanes's algorithm
*/

int normalMaxSum(int *arr, int n)      // Kadane's algo
{
    int res=arr[0], maxEnding=arr[0];
    for(int i=1; i<n; i++)
    {
        maxEnding = max(arr[i], maxEnding+arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int maxCircularSum(int *arr, int n)
{
    // normal sum
    int max_normal = normalMaxSum(arr, n);
    // file:///C:/Users/Asus/Documents/dsa/GFG/resources/4.18.2.png
    if(max_normal<0)
        return max_normal;

    // circular sum
    int arr_sum = 0;
    for(int i=0; i<n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }

    int max_circular = arr_sum + normalMaxSum(arr, n);
    return max(max_normal, max_circular);
}   

int main()
{
    int arr1[]={5,-2,3,4};
    cout<<maxCircularSum(arr1, 4)<<endl;

    int arr2[]={2,3,-4};
    cout<<maxCircularSum(arr2, 3)<<endl;

    int arr3[]={8,-4,3,-5,4};
    cout<<maxCircularSum(arr3, 5)<<endl;

    int arr4[]={-3,4,6,-2};
    cout<<maxCircularSum(arr4, 4)<<endl;

    int arr5[]={-8,7,6};
    cout<<maxCircularSum(arr5, 3)<<endl;

    int arr6[]={3,-4,5,6,-8,7};
    cout<<maxCircularSum(arr6, 6)<<endl;

    return 0;
}
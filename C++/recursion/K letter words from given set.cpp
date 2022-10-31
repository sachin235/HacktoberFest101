/*
Given a set of characters and a positive integer k, print all possible strings of length k that can be formed from the given set.
*/

#include <bits/stdc++.h>
using namespace std;

void printAllKLengthRec(char set[], string prefix, int n, int k) {
    if (k == 0) {
        cout << (prefix) << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLengthRec(set, newPrefix, n, k - 1);
    } 
}
 
void printAllKLength(char set[], int k,int n) {
    printAllKLengthRec(set, "", n, k);
}

int main() {
    int k, n;
    cout<<"Enter the length of target words: ";
    cin>>k;
    cout<<"Enter the length of the character set: ";
    cin>>n;
    cout<<"Enter the elements in the character set: "<<endl;
    char* arr = new char[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    printAllKLength(arr, k, n);
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n,A,B,C; //Here A, B and C are tower numbers
    cin>>n>>A>>B>>C;
    cout<<"The order of moves will be: "<<endl;
    TOH(n,A,B,C);

    return 0;
}
//Given a triangle array, return the minimum path sum from top to bottom.
// For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.


#include<bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {

    int rows = triangle.size();

    vector<int>current(rows , 0);
    vector<int>after(rows , 0);

    for(int i=0; i<rows; i++){
        after[i] = triangle[rows-1][i];
    }

   for(int x = rows-2; x>=0; x--){
       for(int y = x; y>=0; y--){
            int ans = 1e8;

            // down 

            ans = min(ans , triangle[x][y] + after[y]);

            // doagoal right down 

            ans = min(ans , triangle[x][y] + after[y+1]);

            current[y] = ans;
       }

       swap(after , current);
   }

   return after[0];
    
}

int main(){

vector<vector<int>>sample = {{2},{3,4},{6,5,7},{4,1,8,3}};
cout<< minimumTotal(sample);
}


        

#include<iostream>
using namespace std ; 

void hollowSquare(int row ,int col) {
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == 0 || i == col-1 || j == 0 || j == row-1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main(){

hollowSquare(5,5) ; 
// You Can Change your Length And Width Over Here 
    return 0 ; 
}

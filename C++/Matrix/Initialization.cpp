#include<iostream>
using namespace std;
int main()
{
    int sparseMatrix[4][5] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };

    int size = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
                size++;
    int compactMatrix[3][size];
    int k = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }
  cout<<"ROW    ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            cout<<compactMatrix[i][j]<<" ";

        cout<<"\n";
        break;
    }
    cout<<"COLUMN ";
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            cout<<compactMatrix[i][j]<<" ";

        cout<<"\n";
        break;
    }
    cout<<"VALUE  ";
    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            cout<<compactMatrix[i][j]<<" ";
        break;
    }
    return 0;
}

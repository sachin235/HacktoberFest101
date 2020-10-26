#include <iostream>

using namespace std;

int main()
{

    int sparse_matrix1[10][3], sparse_matrix2[10][3], addition[10][3], subtraction[10][3];
    int m, n, p, t1, t2, s, d, element;
    int i, j;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;
    t1 = t2 = 0;

    cout << "\nEnter the first matrix(" << m << "*" << n << "):\n";
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> element;
            if (element != 0)
            {
                t1 = t1 + 1;
                sparse_matrix1[t1][1] = i;
                sparse_matrix1[t1][2] = j;
                sparse_matrix1[t1][3] = element;
            }
        }
    }
    sparse_matrix1[0][1] = m;
    sparse_matrix1[0][2] = n;
    sparse_matrix1[0][3] = t1;
    cout << "\nEnter the second matrix(" << m << "*" << n << "):\n";
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> element;
            if (element != 0)
            {
                t2 = t2 + 1;
                sparse_matrix2[t2][1] = i;
                sparse_matrix2[t2][2] = j;
                sparse_matrix2[t2][3] = element;
            }
        }
    }
    sparse_matrix2[0][1] = m;
    sparse_matrix2[0][2] = n;
    sparse_matrix2[0][3] = t2;
    cout << "\n\nThe first sparse matrix is :\n\nRow\tColumn\tElement";
    cout << "\n-----------------------\n";
    for (i = 0; i <= t1; i++)
    {
        cout << sparse_matrix1[i][1] << "\t" << sparse_matrix1[i][2] << "\t" << sparse_matrix1[i][3] << "\n";
    }
    cout << "\n\nThe second sparse matrix is :\n\nRow\tColumn\tElement";
    cout << "\n-----------------------\n";
    for (i = 0; i <= t2; i++)
    {
        cout << sparse_matrix2[i][1] << "\t" << sparse_matrix2[i][2] << "\t" << sparse_matrix2[i][3] << "\n";
    }
    i = j = s = d = 1;
    while ((i <= t1) && (j <= t2))
    {
        if (sparse_matrix1[i][1] == sparse_matrix2[j][1]) 
        {
            if (sparse_matrix1[i][2] == sparse_matrix2[j][2]) 
            {
                addition[s][1] = subtraction[d][1] = sparse_matrix1[i][1];
                addition[s][2] = subtraction[d][2] = sparse_matrix1[i][2];
                addition[s][3] = sparse_matrix1[i][3] + sparse_matrix2[j][3];
                subtraction[d][3] = sparse_matrix1[i][3] - sparse_matrix2[j][3];
                i++;
                j++;
                if (addition[s][3] != 0)
                    s++;
                if (subtraction[d][3] != 0)
                    d++;
            }
            else
            {
                if (sparse_matrix1[i][2] < sparse_matrix2[j][2])
                {
                    addition[s][1] = subtraction[d][1] = sparse_matrix1[i][1];
                    addition[s][2] = subtraction[d][2] = sparse_matrix1[i][2];
                    addition[s][3] = subtraction[d][3] = sparse_matrix1[i][3];
                    i++;
                    s++;
                    d++;
                }
                else
                {
                    addition[s][1] = subtraction[d][1] = sparse_matrix2[j][1];
                    addition[s][2] = subtraction[d][2] = sparse_matrix2[j][2];
                    addition[s][3] = sparse_matrix2[j][3];
                    subtraction[d][3] = 0 - sparse_matrix2[j][3];
                    j++;
                    d++;
                    s++;
                }
            }
        }
        else
        {
            if (sparse_matrix1[i][1] < sparse_matrix2[j][1])
            {

                addition[s][1] = subtraction[d][1] = sparse_matrix1[i][1];
                addition[s][2] = subtraction[d][2] = sparse_matrix1[i][2];
                addition[s][3] = subtraction[d][3] = sparse_matrix1[i][3];
                i++;
                d++;
                s++;
            }
            else
            {
                addition[s][1] = subtraction[d][1] = sparse_matrix2[j][1];
                addition[s][2] = subtraction[d][2] = sparse_matrix2[j][2];
                addition[s][3] = sparse_matrix2[j][3];
                subtraction[d][3] = 0 - sparse_matrix2[j][3];
                j++;
                s++;
                d++;
            }
        }
    }
    if (i <= t1)
    {
        for (p = i; p <= t1; p++)
        {
            addition[s][1] = subtraction[d][1] = sparse_matrix1[p][1];
            addition[s][2] = subtraction[d][2] = sparse_matrix1[p][2];
            addition[s][3] = subtraction[d][3] = sparse_matrix1[p][3];
            s++;
            d++;
        }
    }
    else if (j <= t2)
    {
        for (p = j; p <= t2; p++)
        {
            addition[s][1] = subtraction[d][1] = sparse_matrix2[p][1];
            addition[s][2] = subtraction
            [d][2] = sparse_matrix2[p][2];
            addition[s][3] = sparse_matrix2[p][3];
            subtraction[d][3] = 0 - sparse_matrix2

            [j][3];
            s++;
            d++;
        }
    }
    addition[0][1] = subtraction[0][1] = m;
    addition[0][2] = subtraction[0][2] = n;
    addition[0][3] = s - 1;

    subtraction[0][3] = d - 1;
    cout << "\n\nThe sum is :\n\nRow\tColumn\tElement";
    cout << "\n-----------------------\n";
    for (i = 0; i < s; i++)
    {
        cout << addition[i][1] << "\t" << addition[i][2] << "\t" << addition[i][3] << "\n";
    }
    cout << "\n\nThe difference is :\n\nRow\tColumn\tElement";
    cout << "\n-----------------------\n";
    for (i = 0; i < d; i++)
    {
        cout << subtraction[i][1] << "\t" << subtraction[i][2] << "\t" << subtraction[i][3] << "\n";
    }
    return 0;
}

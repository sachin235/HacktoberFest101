void Solution::setZeroes(vector<vector<int>> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    map<int, int> x, y;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[0].size(); j++)
        {
            if (A[i][j] == 0)
            {
                x[i] = 1;
                y[j] = 1;
            }
            A[i][j] = 0;
        }
    }
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[0].size(); j++)
        {
            if (x[i] != 1 && y[j] != 1)
            {
                A[i][j] = 1;
            }
            else
            {
                continue;
            }
        }
    }
    return;
}

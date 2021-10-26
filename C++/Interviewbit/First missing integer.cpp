int Solution::firstMissingPositive(vector<int> &A)
{
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] <= A.size() && A[i] > 0 && A[A[i] - 1] != A[i])
        {
            swap(A[i], A[A[i] - 1]);
            i--;
        }
    }
    int res = A.size() + 1;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != i + 1)
        {
            return i + 1;
        }
    }
    return res;
}

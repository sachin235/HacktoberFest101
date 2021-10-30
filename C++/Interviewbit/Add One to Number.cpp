/*
Given a non-negative number represented as an array of digits,
add 1 to the number ( increment the number represented by the digits ).
The digits are stored such that the most significant digit is at the head of the list.
Example:
If the vector has [1, 4, 3]
the returned vector should be [1, 4, 4]
as 143 + 1 = 144.
*/

vector<int> Solution::plusOne(vector<int> &A)
{

    int n = A.size(), carry = 0;
    vector<int> res;
    res.push_back((1 + A[n - 1]) % 10);
    carry = (1 + A[n - 1]) / 10;
    for (int i = n - 2; i >= 0; i--)
    {
        res.push_back((carry + A[i]) % 10);
        carry = (carry + A[i]) / 10;
    }
    if (carry)
        res.push_back(carry);
    int x = res.size();
    for (int i = 0; i < x / 2; i++)
        swap(res[i], res[x - i - 1]);
    while (res[0] == 0)
    {
        res.erase(res.begin());
    }
    return res;
}
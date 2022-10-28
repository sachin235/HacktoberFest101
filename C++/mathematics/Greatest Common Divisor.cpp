// Greatest Common Divisor (Euclid algorithm recursion)

#include <iostream>
using namespace std;
int greatestcommondivisor(int m, int n)
{
    if (n == 0)
        return m;
    else
        return greatestcommondivisor(n, m % n);
}
int main()
{
    int x, y;
    cout << "Enter two number" << endl;
    cin >> x >> y;

    cout << greatestcommondivisor(x, y);
    return 0;
}
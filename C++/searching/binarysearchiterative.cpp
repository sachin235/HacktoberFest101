#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, x;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cin >> x;

	sort(a, a + n);
	int l = 0, h = n - 1;

	while (l < h)
	{
		int mid = (l + h) / 2;
		if (a[mid] == x)
		{
			cout << "Target " << x << " found at index:" << mid + 1 << "\n";
			return 0;
		}
		else if (a[mid] > x)
		{
			h = mid - 1;
		}
		else if (a[mid] < x)
		{
			l = mid + 1;
		}
	}
	cout << "Target " << x << " not found in array.\n";
	return 0;
}


// For a given number it will tell all the prime number less than or equal to it.

#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	bool sieve[n+1];
	memset(sieve, true, sizeof(sieve));

	for (int p=2; p*p<=n; p++)
	{
		if (sieve[p] == true)
		{

			for (int i=p*p; i<=n; i += p)
				sieve[i] = false;
		}
	}

	for (int p=2; p<=n; p++) if (sieve[p]) 	cout << p << " ";
    cout<<"\n";
}
int main()
{
	int n; cin>>n;
	SieveOfEratosthenes(n);
	return 0;
}

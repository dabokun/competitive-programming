#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll ar[100005];

int main(void)
{
	int n;
	cin >> n;
	ll sum = 0;
	ll suma = 0;
	for (int i = 0; i < n; ++i)
	{
		ll tmp;
		cin >> tmp;
		ar[i] = tmp * 2;
		sum += tmp;
		if (i % 2 == 0)
		{
			suma += tmp * 2;
		}
	}
	int a = suma - sum;
	cout << a << " ";
	int tmp = a;
	for (int i = 0; i < n - 1; ++i)
	{
		cout << ar[i] - tmp;
		tmp = ar[i] - tmp;
		if (i != n - 2)
		{
			cout << " ";
		}
		else
		{
			cout << endl;
		}
	}

	return 0;
}

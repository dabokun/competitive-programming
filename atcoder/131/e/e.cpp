#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	int max = (n - 1) * (n - 2) / 2;
	if (k > max)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << (n - 1) + (max - k) << endl;
		for (int i = 0; i < n - 1; ++i)
		{
			cout << 1 << " " << i + 2 << endl;
		}
		int it = max - k;
		int begin = 2, end = begin + 1;
		while (it > 0)
		{
			cout << begin << " " << end << endl;
			end++;
			if (end > n)
			{
				begin++;
				end = begin + 1;
			}
			it--;
		}
	}
	return 0;
}

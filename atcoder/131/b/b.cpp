#include <bits/stdc++.h>

using namespace std;

#define INF 10000

int main(void)
{
	int n, l;
	cin >> n >> l;
	/* int sum = 0;
	int ans = 0;
	int sub = INF;
	for (int i = l; i < l + n; ++i)
	{
		sum += i;
	}
	for (int i = l; i < l + n; ++i)
	{
		int bufn, bufn1;
		bufn = sum, bufn1 = sum - i;
		if (abs(bufn - bufn1) < sub)
		{
			sub = abs(bufn - bufn1);
			ans = bufn1;
		}
	}
	cout << ans << endl;*/
	int min = INF;
	int not_eat = 0;
	int sum = 0;
	for (int i = l; i < l + n; ++i)
	{
		sum += i;
		if (min > abs(i))
		{
			min = abs(i);
			not_eat = i;
		}
	}
	cout << sum - not_eat << endl;
	return 0;
}

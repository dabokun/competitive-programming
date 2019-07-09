#include <bits/stdc++.h>

using namespace std;

int points[12][12];

int main(void)
{
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < d; ++j)
		{
			cin >> points[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int sum = 0;
			for (int k = 0; k < d; ++k)
			{
				sum += (points[i][k] - points[j][k]) * (points[i][k] - points[j][k]);
			}
			int a = (int)sqrt((double)sum);
			//cout << a << " " << sum << endl;
			if (a * a == sum)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

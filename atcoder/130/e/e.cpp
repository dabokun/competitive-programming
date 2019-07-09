//Not solved yet!
#include <bits/stdc++.h>
using namespace std;

int dp[100][100];

int main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> s, t;
	vector<int> row;
	for (int i = 0; i < n; ++i)
	{
		int buf;
		cin >> buf;
		s.push_back(buf);
	}
	for (int j = 0; j < m; ++j)
	{
		int buf;
		cin >> buf;
		t.push_back(buf);
	}
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == t[0])
		{
			flag = true;
		}
		if (flag)
		{
			dp[i][0] = 1;
		}
		else
		{
			dp[i][0] = 0;
		}
	}
	flag = false;
	for (int j = 0; j < m; ++j)
	{
		if (t[j] == s[0])
		{
			flag = true;
		}
		if (flag)
		{
			dp[0][j] = 1;
		}
		else
		{
			dp[0][j] = 0;
		}
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			if (s[i] != t[j])
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << dp[i][j];
		}
		cout << endl;
	}
	int ptr = dp[n - 1][m - 1];
	int x, y;
	x = n - 1, y = m - 1;
	while (ptr > 0)
	{
		int buf = ptr;
		while (ptr == dp[x][y])
		{
			x--;
		}
		while (ptr == dp[x][y])
		{
			y--;
		}
		ptr--;
		row.push_back(s[x + 1]);
	}
	for (int i = row.size() - 1; i >= 0; --i)
	{
		cout << row[i] << " ";
	}

	return 0;
}

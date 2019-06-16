#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int h, w;
	char c;
	int ans = 0;
	cin >> h >> w;
	vector<vector<int>> f(h, vector<int>(w, 0));

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cin >> c;
			if (c == '.')
			{
				f[i][j] = 1;
			}
		}
	}

	vector<vector<int>> L(h, vector<int>(w, 0));
	vector<vector<int>> R(h, vector<int>(w, 0));
	vector<vector<int>> D(h, vector<int>(w, 0));
	vector<vector<int>> U(h, vector<int>(w, 0));

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (f[i][j] == 0)
			{
				L[i][j] = U[i][j] = 0;
			}
			else
			{
				if (j == 0)
				{
					L[i][j] = 1;
				}
				else
				{
					L[i][j] = L[i][j - 1] + 1;
				}
				if (i == 0)
				{
					U[i][j] = 1;
				}
				else
				{
					U[i][j] = U[i - 1][j] + 1;
				}
			}
		}
	}

	for (int i = h - 1; i >= 0; --i)
	{
		for (int j = w - 1; j >= 0; --j)
		{
			if (f[i][j] == 0)
			{
				R[i][j] = D[i][j] = 0;
			}
			else
			{
				if (j == w - 1)
				{
					R[i][j] = 1;
				}
				else
				{
					R[i][j] = R[i][j + 1] + 1;
				}
				if (i == h - 1)
				{
					D[i][j] = 1;
				}
				else
				{
					D[i][j] = D[i + 1][j] + 1;
				}
			}
		}
	}

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (f[i][j] != 0)
			{
				ans = max(ans, L[i][j] + R[i][j] + U[i][j] + D[i][j] - 3);
			}
		}
	}
	cout << ans << endl;

	return 0;
}

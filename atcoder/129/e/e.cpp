#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
int dp[100005][2];

int main(void)
{
	string s;
	cin >> s;
	dp[0][0] = 1;
	int n = s.size();

	for (int i = 0; i < n; ++i)
	{
		//a+bのi桁目を0にする
		{
			if (s[i] == '0')
			{
				dp[i + 1][0] = dp[i][0];
				dp[i + 1][1] = dp[i][1];
			}
			else
			{
				dp[i + 1][1] = (dp[i][0] + dp[i][1]) % mod;
			}
		}

		//a+bのi桁目を1にする
		{

			if (s[i] == '0')
			{
				(dp[i + 1][1] += dp[i][1] * 2 % mod) %= mod;
			}
			else
			{
				(dp[i + 1][0] += dp[i][0] * 2 % mod) %= mod;
				(dp[i + 1][1] += dp[i][1] * 2 % mod) %= mod;
			}
		}
	}
	int ans = (dp[n][0] + dp[n][1]) % mod;
	cout << ans << endl;
	return 0;
}

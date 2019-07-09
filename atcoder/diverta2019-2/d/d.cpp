#include <bits/stdc++.h>

using namespace std;

int dp1[5005];
int main(void)
{
	int n;
	int ga, sa, ba, gb, sb, bb;
	cin >> n;
	cin >> ga >> sa >> ba;
	cin >> gb >> sb >> bb;
	for (int i = 0; i <= n; ++i)
	{
		dp1[i] = i;
	}
	for (int i = n + 1; i < 5005; ++i)
	{
		dp1[i] = -100000000;
	}
	for (int i = n; i >= 0; --i)
	{
		int bufg = dp1[i - ga] + gb;
		int bufs = dp1[i - sa] + sb;
		int bufb = dp1[i - ba] + bb;
		dp1[i] = max(dp1[i], max(bufg, max(bufs, bufb)));
		cout << dp1[i] << ", " << bufg << ", " << bufs << ", " << bufb << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << dp1[i] << endl;
	}

	return 0;
}

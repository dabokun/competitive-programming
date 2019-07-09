#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(void)
{
	ll l, r;
	cin >> l >> r;

	if (l - r > 2018)
	{
		cout << 0 << endl;
		return 0;
	}
	for (ll i = l; i < r; ++i)
	{
		if (i % 2019 == 0)
		{
			cout << 0 << endl;
			return 0;
		}
	}
	ll ans = 100000;
	for (ll i = l; i < r; ++i)
	{
		for (ll j = l + 1; j <= r; ++j)
		{
			ans = min(ans, ((i % 2019) * (j % 2019)) % 2019);
		}
	}
	cout << ans << endl;

	return 0;
}

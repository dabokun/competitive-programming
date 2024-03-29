#include <bits/stdc++.h>

using namespace std;
const int MAX = 2005;
const int MOD = 1000000007;
long long fac[MAX], finv[MAX], inv[MAX];

void COMinit()
{
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; ++i)
	{
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

long long comb(long long n, long long k)
{
	if (n < k)
	{
		return 0;
	}
	if (n < 0 || k < 0)
	{
		return 0;
	}
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(void)
{
	int n, k;
	cin >> n >> k;
	int r = n - k;
	COMinit();
	for (int i = 0; i < k; ++i)
	{
		cout << comb(k - 1, i) * comb(r + 1, i + 1) % MOD << endl;
	}
	return 0;
}

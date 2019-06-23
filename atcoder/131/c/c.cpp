#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	unsigned long long a, aa, b;
	unsigned long c, d, cc, dd;
	cin >> aa >> b >> c >> d;
	a = aa - 1;
	unsigned long long gcd;
	unsigned long long r;
	cc = c, dd = d;
	r = cc % dd;
	while (r != 0)
	{
		cc = dd;
		dd = r;
		r = cc % dd;
	}
	gcd = c * d / dd;

	unsigned long long bdivc, bdivd, bdivgcd, divb;
	unsigned long long adivc, adivd, adivgcd, diva;

	bdivc = b / c, bdivd = b / d, bdivgcd = b / gcd;
	adivc = a / c, adivd = a / d, adivgcd = a / gcd;

	divb = b - (bdivc + bdivd - bdivgcd);
	diva = a - (adivc + adivd - adivgcd);

	cout << (divb - diva) << endl;

	return 0;
}

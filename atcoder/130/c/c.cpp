#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	unsigned long long w;
	unsigned long long h;
	unsigned long long x;
	unsigned long long y;

	cin >> w >> h;
	cin >> x >> y;
	double area = w * h / 2.0;
	cout << fixed << setprecision(9) << area << " ";
	if ((double)(w / 2.0) == (double)x && (double)(h / 2.0) == (double)y)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}

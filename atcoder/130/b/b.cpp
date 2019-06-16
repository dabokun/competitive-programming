#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, x;
	int d = 0;
	int counter = 1;
	vector<int> l;
	cin >> n >> x;
	for (int i = 0; i < n; ++i)
	{
		int buf;
		cin >> buf;
		l.push_back(buf);
	}
	for (int i = 0; i < n; ++i)
	{
		d += l[i];
		if (d <= x)
		{
			counter++;
		}
		else
		{
			break;
		}
	}
	cout << counter << endl;

	return 0;
}

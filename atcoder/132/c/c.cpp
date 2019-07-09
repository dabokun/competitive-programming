#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	if (n % 2 != 0)
	{
		cout << "0" << endl;
	}
	vector<int> diffs;
	for (int i = 0; i < n; ++i)
	{
		int buf;
		cin >> buf;
		diffs.push_back(buf);
	}
	sort(diffs.begin(), diffs.end());
	int left = diffs[n / 2 - 1];
	int right = diffs[n / 2];
	cout << right - left << endl;
	return 0;
}

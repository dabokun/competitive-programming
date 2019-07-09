#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; ++i)
	{
		int buf;
		cin >> buf;
		nums.push_back(buf);
	}
	int ans = 0;
	for (int i = 1; i < n - 1; ++i)
	{
		if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1])
		{
			ans++;
		}
		else if (nums[i] < nums[i - 1] && nums[i] > nums[i + 1])
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

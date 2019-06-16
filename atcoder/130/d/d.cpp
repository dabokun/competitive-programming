#include <bits/stdc++.h>
using namespace std;

unsigned long long sums[100005];

int main(void)
{
	int n;
	unsigned long long k;
	cin >> n >> k;
	unsigned long long sum = 0;
	sums[0] = 0;
	for (int i = 0; i < n; ++i)
	{
		int buf;
		cin >> buf;
		sum += buf;
		sums[i + 1] = sum;
	}
	unsigned long long counter = 0;
	//bool flag = false;
	int pbuf;
	int left = 0, right = 0;
	while (left <= n)
	{
		right = max(left + 1, pbuf);
		while (right <= n && sums[right] - sums[left] < k)
		{
			++right;
		}
		pbuf = right;
		counter += n - right + 1;
		++left;
	}
	/*for (int i = 0; i <= n; ++i)
	{
		for (int j = i + 1; j <= n; ++j)
		{
			if (flag)
			{
				j = pbuf;
				flag = false;
			}
			if (sums[j] - sums[i] >= k)
			{
				counter += n - j + 1;
				pbuf = j;
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			break;
		}
	}*/
	cout << counter << endl;
	return 0;
}

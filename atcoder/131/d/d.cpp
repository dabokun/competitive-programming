#include <bits/stdc++.h>

using namespace std;

bool compare_by_b(pair<unsigned int, unsigned int> a, pair<unsigned int, unsigned int> b)
{
	if (a.second != b.second)
	{
		return a.second < b.second;
	}
	else
	{
		return a.first > b.first;
	}
}

int main(void)
{
	int n;
	cin >> n;
	vector<pair<unsigned int, unsigned int>> task;
	for (int i = 0; i < n; ++i)
	{
		unsigned int bufa, bufb;
		pair<unsigned int, unsigned int> p;
		cin >> bufa >> bufb;
		p = make_pair(bufa, bufb);
		task.push_back(p);
	}
	sort(task.begin(), task.end(), compare_by_b);
	unsigned int sumtime = 0;
	bool flag = true;
	for (int i = 0; i < task.size(); ++i)
	{
		sumtime += task[i].first;
		if (sumtime > task[i].second)
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}

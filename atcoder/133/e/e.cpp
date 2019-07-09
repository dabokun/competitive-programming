/*Not be accepted!*/
#include <bits/stdc++.h>

using namespace std;

int from[100005];
int to[100005];
int visited[100005];

int n, k;
int resources = k - 1;
ll ans = k;
int distances = 0;

void dfs(int n)
{
	if (visited[n] == 1)
	{
		return;
	}
	visited[n] = 1;
}

int main(void)
{
	cin >> n >> k;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> from[i] >> to[i];
	}
	visited[from[0]] = 1;
	for (int i = 0; i < n - 1; ++i)
	{
		if (from[i] == from[0])
		{
			dfs(to[i]);
		}
	}
	return 0;
}

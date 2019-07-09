#include <bits/stdc++.h>

using namespace std;

bool visited[100005];
int dis[100005];
int from[100005];
int to[100005];
int n, m;
int cnt = 0;

void dfs(int n)
{
	cnt++;

	if (cnt % 3 == 0)
	{
		if (visited[n])
		{
			dis[n] = min(dis[n], cnt / 3);
			/* if (dis[n] >= cnt / 3)
			{
				//cout << "updated: " << n << " " << cnt << endl;
			}*/
			cnt--;
			return;
		}
		//cout << "visited: " << n << " " << cnt << endl;
		visited[n] = true;
		dis[n] = cnt / 3;
	}
	for (int i = 0; i < m; ++i)
	{
		if (n == from[i])
		{
			//cout << "check " << from[i] << "->" << to[i] << " " << cnt + 1 << endl;
			dfs(to[i]);
		}
	}
	cnt--;
	return;
}

int main(void)
{
	cin >> n >> m;
	int start, end;
	for (int i = 0; i < m; ++i)
	{
		cin >> from[i] >> to[i];
	}
	cin >> start >> end;
	dis[start] = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (i != start)
		{
			dis[i] = -1;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			visited[j] = false;
		}
		visited[start] = true;
		if (from[i] == start)
		{
			cnt = 0;
			//cout << "check " << from[i] << "->" << to[i] << " " << cnt + 1 << endl;
			dfs(to[i]);
			//cout << endl;
		}
	}
	//cout << "-----distances-----" << endl;
	/* for (int i = 1; i <= n; ++i)
	{
		//cout << dis[i] << endl;
	}*/
	cout << dis[end] << endl;

	return 0;
}

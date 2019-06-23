#include <bits/stdc++.h>

using namespace std;

const int V = 100005;
vector<int> to[V * 2];
bool visited[V * 2];

vector<int> cnt;
void dfs(int v)
{
	//cout << "dfs(" << v << ")" << endl;
	if (visited[v])
	{
		//cout << v << " is visited(in dfs)." << endl;
		return;
	}
	visited[v] = true;
	cnt[v / V]++;
	for (int u : to[v])
		dfs(u);
}

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		y += V;
		to[x].push_back(y);
		to[y].push_back(x);
	}

	long long ans = 0;
	for (int i = 0; i < V * 2; ++i)
	{
		if (visited[i])
		{
			//cout << i << " is visited at first." << endl;
			//cout << i << ":" << cnt[0] << " " << cnt[1] << endl;
			continue;
		}
		cnt = vector<int>(2);
		dfs(i);
		ans += (long long)cnt[0] * cnt[1];
		//cout << i << ":" << cnt[0] << " " << cnt[1] << endl;
	}
	ans -= n;
	cout << ans << endl;

	return 0;
}

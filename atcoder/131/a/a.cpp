#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string s;
	cin >> s;
	bool flag = false;
	for (int i = 0; i < 3; ++i)
	{
		if (s[i] == s[i + 1])
		{
			flag = true;
		}
	}
	if (flag)
	{
		cout << "Bad" << endl;
	}
	else
	{
		cout << "Good" << endl;
	}
	return 0;
}

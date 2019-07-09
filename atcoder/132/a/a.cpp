#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int kind = 0;
    vector<pair<char, int>> list;
    for (int i = 0; i < s.size(); ++i)
    {
        bool is_registered = false;
        for (int j = 0; j < list.size(); ++j)
        {
            if (list[j].first == s[i])
            {
                is_registered = true;
                list[j].second++;
                break;
            }
        }
        if (!is_registered)
        {
            list.push_back(make_pair(s[i], 1));
        }
    }
    if (list.size() == 2 && list[0].second == 2 && list[1].second == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a, b;
    int maxv = 1;
    vector<pair<int, int>> points;
    map<pair<int, int>, int> maps;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        points.push_back(std::make_pair(a, b));
    }
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < points.size(); ++i)
        {
            for (int j = 0; j < points.size(); ++j)
            {
                if (i != j)
                {
                    pair<int, int> p = points[i];
                    pair<int, int> q = points[j];
                    pair<int, int> vec = std::make_pair(q.first - p.first, q.second - p.second);
                    if (maps.find(vec) != maps.end())
                    {
                        maps.at(vec) += 1;
                        maxv = max(maxv, maps.at(vec));
                        cout << "(" << vec.first << ", " << vec.second << "): " << maps.at(vec) << endl;
                    }
                    else
                    {
                        maps.insert(std::make_pair(vec, 1));
                        maxv = max(maxv, 1);
                        cout << "(" << vec.first << ", " << vec.second << ") inserted" << endl;
                    }
                }
            }
        }

        cout << n - maxv << endl;
    }
    return 0;
}
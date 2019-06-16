#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    vector<int> nums;
    vector<bool> signs;
    vector<int> plus;
    vector<int> minus;
    int sum;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int buf;
        cin >> buf;
        nums.push_back(buf);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            signs.push_back(false);
            minus.push_back(nums[i]);
        }
        else if (i == n - 1)
        {
            signs.push_back(true);
            plus.push_back(nums[i]);
        }
        else
        {
            if (nums[i] >= 0)
            {
                signs.push_back(true);
                plus.push_back(nums[i]);
            }
            else
            {
                signs.push_back(false);
                minus.push_back(nums[i]);
            }
        }
    }
    sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += signs[i] ? nums[i] : -nums[i];
    }
    cout << sum << endl;
    int mins0 = minus[minus.size() - 1];
    for (int i = plus.size() - 1; i > 0; --i)
    {
        cout << mins0 << " " << plus[i] << endl;
        mins0 -= plus[i];
    }
    int plu0 = plus[0];
    for (int i = 0; i < minus.size() - 1; ++i)
    {
        cout << plu0 << " " << minus[i] << endl;
        plu0 -= minus[i];
    }
    cout << plu0 << " " << mins0 << endl;
}
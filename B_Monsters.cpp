#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a,
         pair<int, int> b)
{
    if (a.first < b.first)
    {
        return false;
    }
    else if (a.first > b.first)
    {
        return true;
    }
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int r[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            r[i] = a[i] % k;
        }
        vector<int> ans;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            if (r[i] == 0)
            {
                ans.push_back(i+1);
            }
            v[i].first = r[i];
            v[i].second = i + 1;
        }
        sort(v.begin(), v.end(), cmp);
        for (auto i : v)
        {
            if(i.first!=0)
            {
                ans.push_back(i.second);
            }
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
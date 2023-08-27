#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]] = i + 1;
        }
        vector<pair<int, int>> v;
        for (auto i : m)
        {
            v.push_back(make_pair(i.first, i.second));
        }
        // for (auto i : v)
        // {
        //     cout << i.second << " " << i.first << endl;
        // }
        n = v.size();
        int max = -1;
        int indexi = 0, indexj = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (__gcd(v[i].first, v[j].first) == 1 && max < abs(v[i].second + v[j].second))
                {
                    // cout << v[i].first << " " << v[j].first << endl;
                    max = abs(v[i].second + v[j].second);
                    indexi = v[i].second;
                    indexj = v[j].second;
                }
            }
            // cout << endl;
        }
        v.clear();
        cout << indexi + indexj << endl;
    }
}
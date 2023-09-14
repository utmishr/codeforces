#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, a, b;
        cin >> n >> k >> a >> b;
        long long v[n + 1][2];
        for (long long i = 1; i <= n; i++)
        {
            cin >> v[i][0];
            cin >> v[i][1];
        }
        pair<long long, long long> x, y;
        x = make_pair(v[a][0], v[a][1]);
        y = make_pair(v[b][0], v[b][1]);
        long long temp = abs(x.first - y.first) + abs(x.second - y.second);
        long long minx = 1e10, miny = 1e10;
        for (long long i = 1; i <= k; i++)
        {
            if (abs(x.first - v[i][0]) + abs(x.second - v[i][1]) < minx)
            {
                minx = abs(x.first - v[i][0]) + abs(x.second - v[i][1]);
            }
            if (abs(y.first - v[i][0]) + abs(y.second - v[i][1]) < miny)
            {
                miny = abs(y.first - v[i][0]) + abs(y.second - v[i][1]);
            }
        }
        cout << min(minx + miny, temp) << endl;
    }
}
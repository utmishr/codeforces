#include <bits/stdc++.h>

using namespace std;

void solve()
{
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, k, x, y;
        cin >> m >> k >> x >> y;

        if (x >= m || (m % k <= x && m / k <= y))
        {
            cout << 0 << endl;
        }
        else
        {
            int s = min(m / k, y);
            int t = min(m - k * s, x);
            int r = m - t - k * s;
            if (r % k == 0)
            {
                cout << r / k << endl;
            }
            else if ((k - r % k) <= t)
            {
                cout << (r / k) + 1 << endl;
            }
            else
                cout << (r / k) + (r % k) << endl;
        }
    }
    return 0;
}
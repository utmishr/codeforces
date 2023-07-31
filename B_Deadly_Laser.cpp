#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        if ((1 < sx - d && sy + d < m) || (1 < sy - d && sx + d < n))
        {
            
            cout << m + n - 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
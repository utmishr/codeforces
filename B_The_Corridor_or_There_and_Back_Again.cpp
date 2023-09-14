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
        int d[n], s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i] >> s[i];
        }
        int res = 10001000;
        for (int i = 0; i < n; i++)
        {
            int a = (s[i] - 1) / 2;
            res = min(res, a + d[i]);
        }
        cout << res << endl;
    }
}
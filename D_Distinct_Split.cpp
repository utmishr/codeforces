#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> a, b;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            a[s[i]]++;
            ans = max(ans, (int)(a.size() + b.size()));
        }
        for (int i = n - 1; i > 0; i--)
        {
            a[s[i]]--;
            if (a[s[i]] == 0)
            {
                a.erase(s[i]);
            }
            b[s[i]]++;
            ans = max(ans, (int)(a.size() + b.size()));
        }
        cout << ans << endl;
    }
}
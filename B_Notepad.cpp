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
        string ans = "NO";
        cin >> s;
        set<pair<char, char>> se;
        for (int i = 0; i < n - 1; i++)
        {
            pair<char, char> c = {s[i], s[i + 1]};
            if (se.find(c) != se.end())
            {
                ans = "YES";
                break;
            }
            if (i > 0)
            {
                se.insert({s[i - 1], s[i]});
            }
        }
        cout << ans << endl;
    }
}
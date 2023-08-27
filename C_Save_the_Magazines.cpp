#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        priority_queue<int> q;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0')
            {
                while (!q.empty())
                    q.pop();
            }
            q.push(a[i]);
            if (s[i - 1] == '1')
            {
                ans += q.top();
                q.pop();
            }
        }
        cout << ans << endl;
    }
}
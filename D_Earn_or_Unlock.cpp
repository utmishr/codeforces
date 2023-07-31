#include <bits/stdc++.h>
using namespace std;

int dp[100005];
int locki[100005];

int rec(int level, int a[], int n, int ans)
{
    if (level == n)
    {
        return 0;
    }

    if (dp[level] != -1)
    {
        return dp[level];
    }


    if (locki[level] == 1)
    {
        ans += a[level];
        cout<<ans<<"fd";
        if (level + a[level] >= n)
        {
            for (int i = level + 1; i < n; i++)
            {
                locki[i] = 1;
            }
        }
        else
        {
            for (int i = level + 1; i <= level + a[level]; i++)
            {
                locki[i] = 1;
            }
        }
    }
    cout<<level<<" "<<ans<<endl;
    ans = max(ans, rec(level + 1, a, n,ans-a[level]));
    return dp[level] = ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    memset(dp, -1, sizeof(dp));
    memset(locki, 0, sizeof(locki));
    locki[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << rec(0, a, n,0) << endl;
    return 0;
}

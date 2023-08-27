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
        int a[n], count = 0;
        bool vis[100100] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (vis[a[i]] == 1)
            {
                a[i] = 0;
                continue;
            }
            if (a[i] > a[i + 1])
            {
                vis[a[i]] = 1;
                a[i] = 0;
                count++;
            }
        }
        if (vis[a[n - 1]] == 1)
        {
            a[n - 1] = 0;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (vis[a[i]] == 1)
            {
                a[i] = 0;
                continue;
            }
            if (a[i] > a[i + 1])
            {
                vis[a[i]] = 1;
                a[i] = 0;
                count++;
            }
        }
        cout << count << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
const int MOD = 1e9 + 7;
int t, n, ans;
vector<int> a(N), b(N), c(N), fa(N), fb(N);
vector<bool> book(N);

void dfs(int x)
{
    if (book[x])
        return;
    book[x] = true;
    dfs(b[fa[x]]);
}

int main()
{
    cin >> t;
    while (t--)
    {
        ans = 1;
        cin >> n;

        fill(book.begin(), book.begin() + n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            fa[a[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            fb[b[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> c[i];
            if (c[i] && !book[c[i]])
            {
                dfs(c[i]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (!book[i])
            {
                if (fa[i] == fb[i])
                {
                    continue;
                }
                dfs(i);
                ans = (ans * 2) % MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

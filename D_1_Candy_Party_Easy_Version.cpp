#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 5e5 + 5;
int a[maxn];
int b[maxn];

int lowbit(int x)
{
    return x & (-x);
}

bool cmp(int &x, int &y)
{
    return abs(x) > abs(y);
}

void Solve()
{
    int n, sum = 0;
    map<int, int> M;
    M.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], sum += a[i];
    if (sum % n)
    {
        puts("NO");
        return;
    }
    sum /= n;
    for (int i = 1; i <= n; i++)
    {
        int x = b[i] = sum - a[i];
        if (x < 0)
        {
            x = -x;
            M[lowbit(x)]--;
            x = lowbit(x) + x;
            if (lowbit(x) - x)
            {
                puts("NO");
                return;
            }
            M[lowbit(x)]++;
        }
        else
        {
            M[lowbit(x)]++;
            x = lowbit(x) + x;
            if (lowbit(x) - x)
            {
                puts("NO");
                return;
            }
            M[lowbit(x)]--;
        }
    }
    sort(b + 1, b + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        int x = b[i];
        if (x < 0)
        {
            x = -x;
            if (x == lowbit(x))
            {
                if (M[x << 1] > 0)
                {
                    M[x << 1]--;
                    M[x] += 2;
                }
            }
        }
        else
        {
            if (x == lowbit(x))
            {
                if (M[x << 1] < 0)
                {
                    M[x << 1]++;
                    M[x] -= 2;
                }
            }
        }
    }
    for (int i = 0; i <= 32; i++)
    {
        if (M[1ll << i] != 0)
        {
            puts("NO");
            return;
        }
    }
    puts("YES");
}

signed main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}
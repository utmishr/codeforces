#include <bits/stdc++.h>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int n, ans = 0;
        cin >> n;
        while (n != 1)
        {
            int nw = 1, t = 1;
            for (int i = 2; i <= sqrt(n); i++)
                if (n % i == 0)
                {
                    nw *= i;
                    n /= i;
                    while (n % i == 0)
                        n /= i, t *= i;
                }
            nw *= n;
            n = t;
            ans += nw;
        }
        cout << ans << '\n';
    }
}
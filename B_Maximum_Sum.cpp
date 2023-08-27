#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ke;
        cin >> n >> ke;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long pre[n];
        for (int i = 0; i < n; i++)
        {
            pre[i] = a[i];
            if (i)
            {
                pre[i] += pre[i - 1];
            }
        }
        long long maxi = pre[n - ke - 1];
        for (long long i = 1; i <= ke; i++)
        {
            maxi = max(maxi, pre[n - ke + i - 1] - pre[(2 * i) - 1]);
        }
        cout << maxi << endl;
    }
}
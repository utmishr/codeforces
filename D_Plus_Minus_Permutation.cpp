#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        long long l = (a * b) / __gcd(a, b);
        // cout << l << endl;
        long long x = n / a;
        long long y = n / b;
        long long z = n / l;
        x = x - z;
        y = y - z;
        // cout << x << " " << y << "        ";
        long long res = 0;
        long long m = n - x;
        res = (n * (n + 1) / 2) - ((m + 1) * m / 2);
        // cout << res << " ";
        res -= (y * (y + 1) / 2);
        cout << res << endl;
    }
}
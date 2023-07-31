#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;
        int i = r / a;
        i = i * a;
        if (i > l)
        {
            cout << max(r / a + r % a, (i - 1) / a + (i - 1) % a) << endl;
        }
        else
        {
            cout << r / a + r % a << endl;
        }
    }
}
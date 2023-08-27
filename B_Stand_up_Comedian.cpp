#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            cout << 1 << endl;
            continue;
        }
        cout << min(2 * min(c, b) + 2 * a + 1, a + b + c + d) << endl;
    }
}
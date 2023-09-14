#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
void solve()
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (b > a)
        {
            swap(a, b);
        }
        int ans = 0;
        while (a > b)
        {
            a -= c;
            b += c;
            ans++;
        }
        cout << ans << endl;
    }
}
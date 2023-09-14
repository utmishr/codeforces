#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, k;
        cin >> n >> a >> k;
        int on = a, mb = a, m = 0;
        char c;
        while (k--)
        {
            cin >> c;
            mb += (c == '+');
            on += (c == '+');
            on -= (c == '-');
            a = max(a, on);
        }
        cout << (a >= n ? "YES\n" : (mb >= n ? "MAYBE\n" : "NO\n"));
    }
}
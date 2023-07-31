#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int fat = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                fat = 1;
            }
        }
        if (fat == 1)
        {
            cout << 0 << endl;
            continue;
        }
        long long submax = 1000000000;
        for (int i = 1; i < n; i++)
        {
            if (submax > a[i] - a[i - 1])
            {
                submax = a[i] - a[i - 1];
                // cout << a[i] << " " << a[i] << endl;
            }
        }
        // cout<<submax<<" ";
        cout << (submax / 2) + 1 << endl;
    }
}
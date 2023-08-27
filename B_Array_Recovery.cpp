#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int x, y, flag = 0;
        int a[n];
        a[0] = d[0];
        for (int i = 1; i < n; i++)
        {
            x = a[i - 1] - d[i];
            y = a[i - 1] + d[i];
            if (d[i] == 0)
            {
                a[i] = a[i - 1];
                continue;
            }
            if (x * y >= 0)
            {
                flag = 1;
                break;
            }
            else
            {
                a[i] = y;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
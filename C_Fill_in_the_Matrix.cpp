#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m == 1)
        {
            cout << 0 << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 0 << endl;
            }
            continue;
        }
        if (n < m)
        {
            cout << n + 1 << endl;
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                if (temp == m - 1)
                {
                    temp = 0;
                }
                int j = temp;
                int q = m;
                while (q--)
                {
                    cout << j << " ";
                    j++;
                    if (j == m)
                    {
                        j = 0;
                    }
                }
                temp++;
                cout << endl;
            }
            continue;
        }
        cout << m << endl;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp == m - 1)
            {
                temp = 0;
            }
            int j = temp;
            int q = m;
            while (q--)
            {
                cout << j << " ";
                j++;
                if (j == m)
                {
                    j = 0;
                }
            }
            temp++;
            cout << endl;
        }
    }
}
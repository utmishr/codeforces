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
        int a[n * n], j = 0;
        for (int i = 0; i < n * n; i++)
        {
            a[i] = n * n - j;
            a[i + 1] = j + 1;
            j++;
            i++;
        }
        // for (int i = 0; i < n * n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        vector<vector<int>> b(n, vector<int>(n));
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = a[k];
                k++;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << b[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                reverse(b[i].begin(), b[i].end());
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}
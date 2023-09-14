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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x - a[i];
        }
        sort(a, a + n);
        int j = n - 1;
        int count = 0;
        for (int i = 0; i < n;)
        {
            if (i >= j)
            {
                break;
            }
            if (a[i] + a[j] >= 0)
            {
                i++;
                j--;
                count++;
            }
            if (a[i] + a[j] < 0)
            {
                i++;
            }
        }
        cout << count << endl;
    }
}
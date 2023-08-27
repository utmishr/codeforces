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
        int min = 1e9 + 7;
        long long sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a < 0)
            {
                count++;
            }
            sum += abs(a);
            if (abs(a) < min)
            {
                min = abs(a);
            }
        }
        if (count % 2 != 0)
            cout << sum - 2 * min << endl;
        else
            cout << sum << endl;
    }
}
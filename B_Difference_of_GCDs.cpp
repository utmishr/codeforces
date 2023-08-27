#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r;
        cin >> n >> l >> r;
        bool flag = 0;
        vector<int> v;
        if (n == 1)
        {
            cout << "YES" << endl;
            cout << l << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            if ((l / i == r / i) && l % i != 0)
            {

                cout << "NO" << endl;
                flag = 1;
                break;
            }
            else
            {
                v.push_back((r / i) * i);
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}
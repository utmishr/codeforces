#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (l <= k && r >= k)
            {
                for (int j = l; j <= r; j++)
                {
                    m[j]++;
                }
            }
        }
        int flag = 0;
        for (auto i : m)
        {
            if (i.second >= m[k])
            {
                flag++;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
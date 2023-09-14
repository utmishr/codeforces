#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int flag = 0;
            int position = 0;
            while (a > 0)
            {
                if (a & 1)
                {
                    flag = 1;
                    break;
                }
                a >>= 1;
                position++;
            }
            if (flag == 1)
            {
                count += position;
            }
        }
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int temp = i;
            int flag = 0;
            int position = 0;
            while (temp > 0)
            {
                if (temp & 1)
                {
                    flag = 1;
                    break;
                }
                temp >>= 1;
                position++;
            }
            v.push_back(position);
        }
        sort(v.begin(), v.end(), greater<int>());
        if (count >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            int j = 0;
            int flag = 0;
            for (auto i : v)
            {
                j++;
                count += i;
                if (count >= n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << -1 << endl;
            }
            else
                cout << j << endl;
        }
    }
}

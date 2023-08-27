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
        string s;
        cin >> s;
        long long tot = 0;
        vector<long long> v; // v will store the change from L to R and R to L
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                tot += i; // currently current
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                tot += n - 1 - i; /// currently current
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                tot += v[i]; // make changes
            }
            cout << tot << ' ';
        }
        cout << '\n';
    }
}
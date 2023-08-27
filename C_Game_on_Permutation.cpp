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
        int ram[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ram[i];
        }
        int ans = 0;
        set<int> A, B;
        B.insert(ram[0]);
        for (int i = 1; i < n; i++)
        {
            int w = distance(A.begin(), A.lower_bound(ram[i]));
            int w1 = distance(B.begin(), B.lower_bound(ram[i]));

            if (w == 0 && w1 != 0)
            {
                A.insert(ram[i]);
                ans++;
            }
            B.insert(ram[i]);
        }

        cout << ans << "\n";
    }
}
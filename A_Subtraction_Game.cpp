#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (min(a, b) == 1)
        {
            if (max(a, b) == 2)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
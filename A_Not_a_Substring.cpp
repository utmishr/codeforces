#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;
        if (s == "()" || s == "(" || s == ")")
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == s[i - 1])
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "()";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "(";
                }
                for (int i = 0; i < n; i++)
                {
                    cout << ")";
                }
                cout << endl;
            }
        }
    }
}
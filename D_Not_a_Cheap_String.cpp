#include <bits/stdc++.h>
using namespace std;
int t, k, num[1000];
string s;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s >> k;
        int len = s.size(), res = 0;
        memset(num, 0, sizeof(num));
        string t = s;
        sort(t.begin(), t.end());
        bool f = 0;
        for (int i = 0; i < len; i++)
        {
            if (res + t[i] - 'a' + 1 <= k)
                res += t[i] - 'a' + 1, num[t[i]]++, f = 1;
            else
                break;
        }
        // if(!f) cout<<endl;
        for (int i = 0; i < len; i++)
        {
            if (num[s[i]])
            {
                cout << s[i];
                num[s[i]]--;
            }
        }
        cout << endl;
    }
    return 0;
}
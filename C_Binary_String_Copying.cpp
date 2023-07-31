#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin>>s;
        // cout<<n<<" "<<m<<endl;
        int on[n];
        int ze[n];
        if (s[0] == '1')
        {
            on[0] = 1;
            ze[0] = 0;
        }
        else
        {
            on[0] = 0;
            ze[0] = 1;
        }
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                on[i] = on[i - 1]+1;
                ze[i] = ze[i - 1];
            }
            else
            {
                on[i] = on[i - 1];
                ze[i] = ze[i - 1] + 1;
            }
        }
        set<string> se;
        for (int i = 0; i < m; i++)
        {
            string str=s;
            int l, r;
            cin >> l >> r;
            l--; r--;
            int one = on[r]-on[l];
            int zero=ze[r]-ze[l];
            if(s[l]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
            for (int j = l; j <= r; j++)
            {
                if(zero!=0)
                {
                    str[j]='0';
                    zero--;
                }
                else
                {
                    str[j]='1';
                    one--;
                }
            }
            // cout<<str<<endl;
            se.insert(str);
        }
        cout<<se.size()<<endl;
    }
}
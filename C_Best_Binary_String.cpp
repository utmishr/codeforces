#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n=a.length();
        if (a[n - 1] == '?')
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] != '?')
                {
                    break;
                }
                a[i] = '1';
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if(a[i]=='?' && a[i+1] == '0')
            {
                a[i]='0';
            }
            if(a[i] == '?' && a[i+1] == '1')
            {
                a[i]='1';
            }
        }
        cout<<a<<endl;
    }
}

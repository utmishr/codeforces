#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string a="";
        int count = 0;
        for(int i=0;i<k;i++)
        {
            a.push_back(s[i]);
            if(s[i]=='B')
            {
                count++;
            }
        }
        int ma=count;
        for(int i=k+1;i<=n-k;i++)
        {
            if(a[0]=='B')
            {
                count--;
            }
            if(a[i]=='B')
            {
                count++;
            }
            a.erase(0, 1);
            a.push_back(s[i]);
            ma=max(ma,count);
        }
        cout<<k-ma<<endl;
    }
}
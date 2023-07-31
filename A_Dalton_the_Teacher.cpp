#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int a[n];
        int count = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==i+1)
            {
                count++;
            }
        }
        cout<<(count+1)/2<<endl;
    }
}
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
        int a[n], b[n];
        vector<int> even, odd;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                b[i] = 0;
                even.push_back(a[i]);
            }
            else
            {
                b[i] = 1;
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int x=0,y=0;
        for(int i = 0; i < n; i++)
        {
            if(b[i]==1)
            {
                b[i]=odd[x];
                x++;
            }
            else{
                b[i]=even[y];
                y++;
            }
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(b[i+1]<b[i])
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }

    }
}

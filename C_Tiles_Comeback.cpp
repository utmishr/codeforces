#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = a[0];
        int y = a[n - 1];
        int count=0;
        if(x==y)
        {
            for(int i = 0; i < n; i++)
            {
                if(a[i]==x)
                {
                    count++;
                }
            }
            if(count>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            continue;
        }
        int countx = 0, county = 0;
        int inx = 0, iny = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                countx++;
            }
            if (countx >= k)
            {
                inx = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == y)
            {
                county++;
            }
            if (county >= k)
            {
                iny = i;
                break;
            }
        }
        if (inx >= iny || countx<k || county<k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        int flag=0,x=0,y=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
                if(a[i][j]!='.' && flag==0)
                {
                    flag=1;
                    x=i;
                    y=j;
                }
            }
        }
        for(int i=x;i<8;i++)
        {
            if(a[i][y]=='.')
            {
                break;
            }
            cout<<a[i][y];
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2!=0 || n==2)
        {
            cout<<-1<<endl;
            continue;
        }
        long long total=(n/6) + (n-(n/6)*6)/4;
        if(n-(n/6)*6==2)
        {
            total++;
        }
        long long tree=(n/4) + (n-(n/4)*4)/6;
        cout<<total<<" "<<tree<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long home[100005], away[100005];
  memset(home, 0, sizeof(home));
  memset(away, 0, sizeof(away));
  for (long long i = 1; i < n + 1; i++)
  {
    long long t;
    cin >> t;
    home[t]++;
    cin >> away[i];
  }
  for (long long i = 1; i < n + 1; i++)
  {
    cout << home[away[i]] + n - 1 << " ";
    cout << (n - 1) - home[away[i]] << endl;
  }
}
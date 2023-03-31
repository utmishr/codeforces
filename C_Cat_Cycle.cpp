#include <iostream>
using namespace std;
#define ll long long int

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    ll a = 1, b = n;
    for (ll i = 0; i < k; i++)
    {
      b++;
      if (b > n)
      {
        b = 1;
      }
      a--;
      if (a < 1)
      {
        a = n;
      }
      if (a == b)
      {
        b++;
        if (b > n)
        {
          b = 1;
        }
      }
    }
    cout << b << endl;
  }
}
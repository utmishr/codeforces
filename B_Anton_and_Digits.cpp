#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k2, k3, k5, k6;
  cin >> k2 >> k3 >> k5 >> k6;
  if (min(k5, k6) >= k2)
  {
    cout << k2 * 256;
  }
  else
  {
    if (k5 >= k6)
    {
      cout << k6 * 256 + min(k3, (k2 - k6)) * 32;
    }
    if (k6 > k5)
    {
      cout << k5 * 256 + min(k3, (k2 - k5)) * 32;
    }
  }
}
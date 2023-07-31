#include <bits/stdc++.h>
using namespace std;

void PrimeFact(int n)
{
  int count2 = 0, count3 = 0;
  while (1)
  {
    if (n % 2 != 0 || n == 1)
    {
      break;
    }
    n /= 2;
    count2++;
  }
  while (1)
  {
    if (n % 3 != 0 || n == 1)
    {
      break;
    }
    n /= 3;
    count3++;
  }
  // cout << count2  << count3 << endl;
  if (n == 1)
  {
    if (count2 > count3)
      cout << -1 << endl;
    if (count2 == count3)
    {
      cout << count2 << endl;
    }
    if (count2 < count3)
    {
      cout << 2 * count3 - count2 << endl;
    }
  }
  else
  {
    cout << -1 << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n == 1)
    {
      cout << 0 << endl;
      continue;
    }
    PrimeFact(n);
  }
}
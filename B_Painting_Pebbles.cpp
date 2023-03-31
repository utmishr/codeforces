#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a, a + n);
  int maxq = a[n - 1] / k;
  int maxr = a[n - 1] % k;
  int minq = a[0] / k;
  int minr = a[0] % k;
  int flag = 0;
  if (minq + 1 < maxq)
  {
    flag = 1;
  }
  if (minq + 1 == maxq)
  {
    if (minr < maxr)
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < b[i]; j++)
      {
        cout << ((j + 1) % k) + 1 << " ";
      }
      cout << endl;
    }
  }
}
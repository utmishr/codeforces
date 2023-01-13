#include <iostream>
using namespace std;
int i, j, k, s, n, m, x, a[100009], b[100009], c[100009];
int main()
{
  cin >> n >> m >> x;
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  i = j = k = s = 0;
  for (i = 0; i < n; i++)
  {
    if (i + m <= n)
    {
      if (j < m)
      {
        s = s + b[j++];
      }
      c[i] = s;
    }
    else
    {
      if (j < m)
      {
        s = s + b[j++];
      }
      s -= b[k++];
      c[i] = s;
    }
  }
  for (i = 0; i < n; i++)
    cout << (a[i] + c[i]) % x << " ";
  return 0;
}
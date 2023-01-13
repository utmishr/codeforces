#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, temp, min;
    cin >> n;
    int a[n];
    int b[n], c[n];
    int j = 0, k = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
      {
        b[j] = i;
        j++;
      }
      else
      {
        c[k] = i;
        k++;
      }
    }
    reverse(c, c + k);
    if (k < j)
    {
      min = k;
    }
    else
      min = j;
    for (int i = 0; i < min; i++)
    {
      if (b[i] < c[i])
      {
        count++;
      }
      if (b[i] > c[i])
      {
        break;
      }
    }
    cout << count << endl;
  }
}
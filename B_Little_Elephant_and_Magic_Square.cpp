#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[10];
  for (int i = 1; i <= 9; i++)
  {
    cin >> a[i];
  }
  a[1] = (a[6] + a[8]) / 2;
  a[5] = a[1] + a[3] - a[8];
  a[9] = a[1] + a[2] - a[6];
  for (int i = 1; i <= 9; i++)
  {
    if (i % 3 == 0)
    {
      cout << a[i] << endl;
    }
    else
      cout << a[i] << " ";
  }
  return 0;
}

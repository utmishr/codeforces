#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int m = 2;
  if (n == 1)
  {
    cout << "1" << endl;
    cout << "1 1";
    exit(0);
  }
  while (true)
  {
    if (2 * abs(m - 1) >= n - 1)
    {
      break;
    }
    m]=++;
  }
  cout << m << endl;
  for (int i = 1; i <= m; i++)
  {
    cout << "1 " << i << endl;
  }
  if (n > m)
  {
    for (int i = 2 * m - n + 1; i <= m; i++)
    {
      cout << m << " " << i << endl;
    }
  }
}
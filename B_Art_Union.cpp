#include <bits/stdc++.h>
using namespace std;

int main()
{

  int p, n;
  cin >> p >> n;

  long a[p + 1][n + 1];
  memset(a, 0, sizeof a);
  for (int i = 1; i <= p; i++)
  {

    for (int j = 1; j <= n; j++)
    {

      cin >> a[i][j];
      a[i][j] += max(a[i - 1][j], a[i][j - 1]);
    }
  }

  for (int i = 1; i <= p; i++)
    cout << a[i][n] << " ";
}
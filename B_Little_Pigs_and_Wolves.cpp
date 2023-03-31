#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;
  char arr[m][n];
  int count = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i][j] == 'W')
      {
        count += ((i > 0 && arr[i - 1][j] == 'P') || (i < m - 1 && arr[i + 1][j] == 'P') || (j < n - 1 && arr[i][j + 1] == 'P') || (j > 0 && arr[i][j - 1] == 'P')) ? 1 : 0;
      }
    }
  }
  cout << count;
}

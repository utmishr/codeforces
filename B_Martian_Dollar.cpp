#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a[n];
  int max = m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int mg = 0;
      int dola_bou = m / a[i];
      mg = m - (a[i] * dola_bou);
      int sel = a[j] * dola_bou;
      mg = mg + sel;
      if (mg > max)
      {
        max = mg;
      }

      // cout << mg << " ";
    }
    // cout << endl;
  }
  cout << max;
}
#include <bits/stdc++.h>

using namespace std;

int n, x[300], y[300];
int ans;
int main()
{
  int i, j, k;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d%d", x + i, y + i);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      int l = 0, r = 0;
      for (k = 0; k < n; k++)
      {
        int cross = (x[j] - x[i]) * (y[k] - y[j]) - (y[j] - y[i]) * (x[k] - x[j]);
        l = min(l, cross);
        r = max(r, cross);
      }
      if (l < 0 && r > 0)
        ans = max(ans, r - l);
    }
  }
  printf("%lf\n", ans / 2.0);
}

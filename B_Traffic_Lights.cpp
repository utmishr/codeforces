#include <bits/stdc++.h>
using namespace std;
int main()
{
  int l, d, v, g, r;
  cin >> l >> d >> v >> g >> r;

  double t1 = 1.0 * (d) / (v);
  double t2 = 1.0 * (l - d) / (v);

  long u = t1 / (g + r);
  t1 = t1 - u * (g + r);
  if (t1 >= g)
  {
    t1 = (u + 1) * (g + r);
  }
  cout << setprecision(10) << t1 + t2 << endl;
}
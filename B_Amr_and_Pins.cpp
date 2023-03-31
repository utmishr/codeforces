#include <bits/stdc++.h>
using namespace std;

int main()
{
  long double r, a, b, c, d;
  cin >> r >> a >> b >> c >> d;
  long double t = sqrt((c - a) * (c - a) + (d - b) * (d - b));
  cout << ceil(t / (2 * r));
}
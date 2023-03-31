#include <bits/stdc++.h>
using namespace std;

int i = 3, k, x, y, p[4];
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  for (cin >> k, p[k] = 1; i--; swap(p[x], p[y]))
    cin >> x >> y;
  cout << (p[1] ? 1 : p[2] ? 2
                           : 3);
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long double a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (a / b) / (1 - (1 - a / b) * (1 - c / d));
}
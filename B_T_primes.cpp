#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPrime(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;

  return true;
}
void recurse()
{
  int n;
  cin >> n;
  int x = sqrt(n);
  if (x * x == n && isPrime(x))
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n;
  cin >> n;
  while (n--)
    recurse();
}
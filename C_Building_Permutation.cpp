#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long a[n + 1];
  for (long long i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  long long count = 0;
  sort(a + 1, a + n + 1);
  for (long long i = 1; i <= n; i++)
  {
    count += abs(i - a[i]);
  }
  cout << count;
}
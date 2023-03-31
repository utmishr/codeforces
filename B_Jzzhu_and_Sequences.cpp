#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, m, ans = -1, k;
  long long arr[60];
  cin >> n >> m >> k;
  k %= 6;
  arr[1] = n;
  arr[2] = m;
  arr[3] = m - n;
  arr[4] = -n;
  arr[5] = -m;
  arr[0] = n - m;
  cout << (arr[k] + 1000000007 + 1000000007 + 1000000007) % 1000000007;
}
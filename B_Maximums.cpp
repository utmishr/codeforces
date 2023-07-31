#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long array[n];
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  long long ans[n];
  ans[0] = array[0];
  long long m = 0;
  cout << ans[0] << " ";
  m = max(m, ans[0]);
  for (int i = 1; i < n; i++)
  {
    ans[i] = array[i] + m;
    m = max(m, ans[i]);
    cout << ans[i] << " ";
  }
  return 0;
}
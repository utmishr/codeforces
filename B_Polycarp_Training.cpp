#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i < n + 1; i++)
  {
    cin >> a[i];
  }
  // a[n]=-1;
  sort(a + 1, a + n + 1);
  int count = 1;
  for (int i = 1; i < n + 1; i++)
  {
    // if (a[i] < i)
    // {
    //   continue;
    // }
    if (a[i] >= count)
    {
      count++;
    }
  }
  cout << count - 1;
}
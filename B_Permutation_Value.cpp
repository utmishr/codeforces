#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int flag;
    int n;
    cin >> n;
    int k;
    if (n % 2 == 0)
    {
      flag = n / 2;
      k = n;
    }
    else
    {
      flag = (n / 2) + 1;
      k = n - 1;
    }
    int j = 1;
    for (int i = 0; i < flag; i++)
    {
      cout << j << " ";
      j = j + 2;
    }
    for (int i = 0; i < n / 2; i++)
    {
      cout << k << " ";
      k = k - 2;
    }
    cout << endl;
  }
}
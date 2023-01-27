#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  while (n--)
  {
    long long t;
    cin >> t;
    long long a[t];
    vector<int> odd, even;
    for (int i = 0; i < t; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 0)
      {
        even.push_back(i);
      }
      else
      {
        odd.push_back(i);
      }
    }
    if (odd.size() == 0)
    {
      cout << "NO" << endl;
    }
    if (even.size() > 1 && odd.size() != 0)
    {
      cout << "YES" << endl;
      cout << even[0] + 1 << " " << even[1] + 1 << " " << odd[0] + 1 << endl;
    }
    if (even.size() == 0)
    {
      cout << "YES" << endl;
      cout << odd[0] + 1 << " " << odd[1] + 1 << " " << odd[2] + 1 << endl;
    }
    if (even.size() == 1 && t == 3)
    {
      cout << "NO" << endl;
    }
    if (even.size() == 1 && t > 3)
    {
      cout << "YES" << endl;
      cout << odd[0] + 1 << " " << odd[1] + 1 << " " << odd[2] + 1 << endl;
    }
  }
}
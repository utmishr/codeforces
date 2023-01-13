#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int flag = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        if (a[i] == a[j] && s[i] != s[j])
        {
          cout << "NO" << endl;
          flag = 1;
          break;
        }
      }
      if (flag == 1)
      {
        break;
      }
    }
    if (flag == 0)
    {
      cout << "YES" << endl;
    }
  }
}
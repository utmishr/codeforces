#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int count = 0, sum = 0;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
      count = 0;
      for (int j = 1; j <= n - i + 1; j++)
      {
        if (a[j + i - 1] >= j)
        {
          count++;
        }
        else
        {
          break;
        }
      }
      sum = sum + count;
    }
    cout << sum << endl;
  }
}
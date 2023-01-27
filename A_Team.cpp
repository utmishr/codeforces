#include <iostream>
using namespace std;

int main()
{
  int n, ans = 0;
  cin >> n;
  while (n--)
  {
    int a, count = 0;
    {
      for (int i = 0; i < 3; i++)
      {
        cin >> a;
        if (a == 1)
        {
          count++;
        }
      }
      if (count >= 2)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}
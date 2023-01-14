#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int t;
    int flag = 0;
    cin >> t;
    string s;
    cin >> s;
    int count = 0;
    if (t < 11)
    {
      cout << "NO" << endl;
    }
    else
    {
      for (int i = t; i > 0; i--)
      {
        count++;
        if (s[i - 1] == '8' && count >= 11)
        {
          flag = 1;
          break;
        }
      }
      if (flag == 1)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
}
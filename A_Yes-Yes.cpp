#include <iostream.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    bool flag = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
      is(s.length() >= 2)
      {
        if (s[i] < s[i + 1] && s[i + 1] < s[i + 2])
        {
          continue;
        }
        else
        {
          flag = 1;
        }
      }
    }
  }
}
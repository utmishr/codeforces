#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i, j;
  string s;
  cin >> s;
  int l = s.length();
  for (i = 0; i < l; i++)
  {
    if (s[i] == '.')
      cout << "0";
    if (s[i] == '-' && s[i + 1] == '.')
    {
      cout << "1";
      i++;
    }
    if (s[i] == '-' && s[i + 1] == '-')
    {
      cout << "2";
      i++;
    }
  }
}
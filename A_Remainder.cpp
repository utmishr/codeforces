#include <iostream>
using namespace std;

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  string s;
  cin >> s;
  int coun = 0;
  if (s[n - y - 1] == '0')
  {
    coun++;
  }
  for (int i = 0; i < x; i++)
  {
    if (s[n - 1 - i] == '1' && i != y)
    {
      coun++;
    }
  }
  cout << coun;
}
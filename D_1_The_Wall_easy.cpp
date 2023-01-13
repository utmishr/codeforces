#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  char a[x][y];
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cin >> a[i][j];
    }
  }
  int c = 0;
  for (int i = 0; i < y; i++)
  {
    if (a[x - 1][i] == 'B' && a[x - 1][i + 1] == '.')
    {
      c++;
    }
  }
  if (a[x - 1][y - 1] == 'B')
  {
    cout << c + 1;
  }
  else
    cout << c;
}
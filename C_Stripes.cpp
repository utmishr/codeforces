#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int flag = 0;
    char a[8][8];
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < 8; i++)
    {
      int count = 0;
      for (int j = 0; j < 8; j++)
      {
        if (a[i][j] == 'R')
        {
          count++;
        }
      }
      if (count == 8)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
    {
      cout << "R" << endl;
    }
    else
    {
      cout << "B" << endl;
    }
  }
}
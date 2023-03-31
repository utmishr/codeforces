#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int answer[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> answer[i];
  }

  int i = 0;
  int max = 1;
  while (i < n)
  {
    int counter = 1;
    int r = i - 1;
    while (r >= 0 && answer[r] <= answer[r + 1])
    {
      r--;
      counter++;
    }
    int l = i + 1;
    while (l < n && answer[l] <= answer[l - 1])
    {
      l++;
      counter++;
    }
    i = l;
    if (counter > max)
    {
      max = counter;
    }
    counter = 1;
  }
  cout << max;
}
#include <bits/stdc++.h>
using namespace std;

bool is(string S)
{
  for (int i = 0; i < S.length() / 2; i++)
  {
    if (S[i] != S[S.length() - i - 1])
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  char ch[100000];
  scanf(" %s", ch);
  string s = (string)ch;
  int poc[26];
  memset(poc, 0, sizeof(poc));
  for (int i = 0; i < (int)s.length(); i++)
    poc[s[i] - 'a']++;
  int odd = 0;
  for (int i = 0; i < 26; i++)
    if (poc[i] % 2 != 0)
      odd++;
  if (odd <= 1)
  {
    printf("First\n");
    return 0;
  }
  if (odd % 2 == 0)
    printf("Second\n");
  else
    printf("First\n");
  return 0;
}

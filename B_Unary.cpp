#include <bits/stdc++.h>
using namespace std;

#define trav(a, x) for (auto &a : x)

#define ins insert

int main()
{
  string S;
  cin >> S;
  map<char, int> M;
  M.ins({'>', 8});
  M.ins({'<', 9});
  M.ins({'+', 10});
  M.ins({'-', 11});
  M.ins({'.', 12});
  M.ins({',', 13});
  M.ins({'[', 14});
  M.ins({']', 15});
  int ans = 0;
  trav(a, S)
  {
    ans *= 16;
    ans %= 1000003;
    ans += M[a];
    ans %= 1000003;
  }
  cout << ans << endl;

  return 0;
}

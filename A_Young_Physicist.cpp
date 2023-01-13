#include <iostream>
using namespace std;
int main()
{
  int n, x = 0, y = 0, z = 0, a = 0, b = 0, c = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x >> y >> z;
    cout << endl;
    a = a + x;
    b = b + y;
    c = c + z;
  }
  if (a == 0 && b == 0 && c == 0)
    cout << "YES";
  else
    cout << "NO";
}
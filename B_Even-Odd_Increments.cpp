#include <iostream>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n, q, ty, x;
    cin >> n;
    cin >> q;
    long long a[n];
    int odd[n], even[n];
    long long k = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 0)
      {
        even[k] = i;
        k++;
      }
      else
      {
        odd[j] = i;
        j++;
      }
      for (int i = 0; i < q; i++)
      {
        cin >> ty;
        cin >> x;
        if (ty == 0)
        {
          even = ty;
        }
      }
    }
  }
}
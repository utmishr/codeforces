#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        int k = 1;
        int x = 0, y = 0;
        while (n > 0)
        {
            int c = n % 10;
            int temp = c / 2;
            int tempb = c / 2;
            if (c & 1)
            {
                if (a >= b)
                    b++, tempb++;
                else
                    a++, temp++;
            }
            x += (temp * k);
            y += (tempb * k);
            k *= 10;
            n /= 10;
        }
        cout << x << " " << y << "\n";
    }
}
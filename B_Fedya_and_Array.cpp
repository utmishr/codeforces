#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int len = (x - y) * 2;
        cout << len << endl;
        for (int i = x; i >= y; i--)
            cout << i << " ";
        for (int i = y + 1; i < x; i++)
            cout << i << " ";
    }
}
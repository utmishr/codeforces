#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, m, a[205], s = 0;
		cin >> n >> m;
		for (int i = 1; i <= n + m; i++)
			cin >> a[i]; 
		s += a[n + m];
		sort(a + 1, a + n + m);
		for (int i = 1; i < n; i++)
			s += a[n + m - i];
		cout << s << endl;
	}
}
#include <iostream>
using namespace std;
int N, M;
string s, S;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin.tie(0);
        cin >> N >> M;
        int ans = 0, flag = -2;
        for (int i = 0; i < N; i++)
        {
            cin >> S;
            for (int j = 0; j < M; j++)
            {
                ans += S[j] - '0';
                if (flag)
                {
                    if (S[j] == '0')
                        flag = -1;
                    if (i && j && s[j] + S[j] + s[j - 1] + S[j - 1] - 4 * '0' < 3)
                        flag = 0;
                }
            }
            s = S;
        }
        printf("%d\n", ans + flag);
    }
    return 0;
}
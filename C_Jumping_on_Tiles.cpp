#include <bits/stdc++.h>
using namespace std;

auto customCompare = [](const std::pair<char, int> &a, const std::pair<char, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first; // Sort char in descending order
    }
    else
    {
        return a.second < b.second; // Sort int in ascending order
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        vector<pair<char, int>> v;
        if (s[0] > s[n - 1])
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] <= s[0] && s[i] >= s[n - 1])
                {
                    v.push_back({s[i], i + 1});
                    count++;
                }
            }
            sort(v.begin(), v.end(), customCompare);
            cout << s[0] - s[n - 1] << " " << count << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].second << " ";
            }
            cout << endl;
        }
        else if (s[0] < s[n - 1])
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] >= s[0] && s[i] <= s[n - 1])
                {
                    v.push_back({s[i], i + 1});
                    count++;
                }
            }
            sort(v.begin(), v.end());
            cout << s[n - 1] - s[0] << " " << count << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].second << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == s[0])
                {
                    v.push_back({s[i], i + 1});
                    count++;
                }
            }
            cout << 0 << " " << count << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i].second << " ";
            }
            cout << endl;
        }
    }
}
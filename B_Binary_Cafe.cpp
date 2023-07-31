#include <bits/stdc++.h>
using namespace std;

int countSubsetSum(const std::vector<int> &nums, int target)
{
  int n = nums.size();
  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(target + 1, 0));

  for (int i = 0; i <= n; ++i)
    dp[i][0] = 1;

  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= target; ++j)
    {
      if (nums[i - 1] <= j)
        dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
      else
        dp[i][j] = dp[i - 1][j];
    }
  }

  return dp[n][target];
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int k, n;
    cin >> k >> n;
    vector<int> nums;
    for (int i = 0; i <= 30; i++)
    {
      nums.push_back(pow(2, i));
    }
    int power = log2(k);
    target = k -
             int result = countSubsetSum(nums, target);
    cout << ways << endl;
  }
}

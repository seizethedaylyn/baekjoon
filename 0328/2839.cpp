#include <iostream>

using namespace std;

int n;

int dp[5001];

int main()
{
  cin >> n;

  for (int i = 0; i < 5000; i++)
  {
    dp[i] = -1;
  }

  dp[3] = 1;
  dp[5] = 1;

  for (int i = 6; i <= n; i++)
  {
    if (dp[i - 3] != -1 && dp[i - 5] != -1)
      dp[i] = min(dp[i - 3], dp[i - 5]) + 1;
    else if (dp[i - 3] != -1)
      dp[i] = dp[i - 3] + 1;
    else if (dp[i - 5] != -1)
      dp[i] = dp[i - 5] + 1;
  }

int answer = dp[n];

cout << answer << endl;

return 0;
}
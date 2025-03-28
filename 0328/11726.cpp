#include <iostream>

using namespace std;

int n;

int main(){
  cin >> n;

  int dp[n];
  dp[0] = 1;
  dp[1] = 2;
  for(int i = 2; i < n ; i++){
    dp[i] = dp[i-1] + dp[i-2];
    dp[i] %= 10007;
  }

  int answer = dp[n-1];

  cout << answer << endl;

  return 0;

}
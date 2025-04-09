#include <iostream>

using namespace std;

int dp[11];

int main(){
  dp[0] = 1;
  dp[1] = 2;
  dp[2] = 4;

  for(int i = 3; i < 11; i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }

  int t;
  cin >> t;

  int test[t];

  for(int i = 0; i < t; i++){
    cin >> test[i];
  }

  for(int i = 0; i<t;i++){
    cout << dp[test[i]-1]<< "\n";
  }
  
  return 0;
}
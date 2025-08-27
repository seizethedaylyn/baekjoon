#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> dp(N+1);

  dp[1] = 0;

  for(int i = 2; i <= N; i++){
    dp[i] = dp[i - 1] + 1; // 일단 이전 연산횟수 +1;
    if(i%3==0) dp[i] = min(dp[i],dp[i/3]+1); // i가 3으로 나눠진다면, dp[i/3]의 값과 비교해서 최소값을 배열에 넣는다
    if(i%2==0) dp[i] = min(dp[i],dp[i/2]+1);
  }
  cout << dp[N] << endl;
  return 0;
}
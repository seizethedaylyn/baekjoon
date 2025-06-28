#include <iostream>
#include <vector>

using namespace std;
int DP[31][31];
vector<int> results;

int main(){
  int T;
  cin >> T;

  for(int i = 0; i <= 30; i++){
    for(int j = 0; j <= i; j++){
      if(j == 0 || i == j) DP[i][j] = 1;
      else DP[i][j] = DP[i-1][j-1] + DP[i-1][j];
    }
  }

  for(int t = 0; t < T; t++){
    int N, M;
    cin >> N >> M;

    results.push_back(DP[M][N]);

  }
  for(int t = 0; t < T; t++){
    cout << results[t] << "\n";
  }
  return 0;
}


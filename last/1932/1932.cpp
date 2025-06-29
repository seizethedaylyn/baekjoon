#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int dp[501];
  int n;

  cin >> n;

  int tri[501][501];

  for(int i = 0; i< n;i++){
    for(int j = 0; j< i+1; j++){
      int a;
      cin >> a;
      tri[i][j] = a;
    }
  }

  for(int i = n-1 ; i >= 1 ; i--){
    for(int j = 0; j< i+1; j++){
      tri[i-1][j] += max(tri[i][j], tri[i][j+1]);
    }
  }

  cout << tri[0][0] << endl;

  
return 0;

}
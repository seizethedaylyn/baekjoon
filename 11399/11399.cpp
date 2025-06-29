#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n;
  int t = 0;

  cin >> n;;
  int p[n];
  int time[n];

  for(int i = 0; i < n; i++){
    cin >> p[i];
  }
  
    sort(p, p+n);

  time[0] = p[0];

  for(int i = 1; i < n; i++){
    time[i] = time[i-1] + p[i];
  }
  
   for(int i = 0; i < n; i++){
    t += time[i];
  }

  cout << t << endl;

}
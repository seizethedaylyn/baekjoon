#include <iostream>
#include <queue>

using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  queue<int> q;

  for(int i = 0; i < n; i++){
    q.push(i+1);
  }

  cout << "<";
  
  while(!q.empty()){
    for(int a = 1; a < k; a++){
      int tmp = q.front();
      q.pop();
      q.push(tmp);
    }
    cout << q.front();
    q.pop();
    if(q.empty()) break;
    cout << ", ";
  }

  cout << ">" << endl;

}
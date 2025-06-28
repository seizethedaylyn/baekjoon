#include <iostream>
#include <vector>

using namespace std;

/*
7
6
1 2
2 3
1 5
5 2
5 6
4 7

*/

vector<int> graph[100];
bool isVisited[100];
int ans = 0;

void dfs(int node){
  isVisited[node] = true;

  for(int i = 0; i<graph[node].size();i++){
    int next = graph[node][i];
    if(isVisited[next] == false){
      dfs(next);
      ans++;
    }
  }
}

int main(){
  int N, M;
  cin >> N;
  cin >> M;


  for(int i = 0 ; i < M ;i++){
    int a,b;
    cin >>  a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  dfs(1);

  cout << ans<< endl;
  return 0;
}


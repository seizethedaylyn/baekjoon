#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;

vector<int> graph[1001];
bool isVisited[1001];
int seqbfs[1001];
int seqdfs[1001];
int n, m, v;
int dfsIdx = 0;
int bfsIdx = 0;

void dfs(int node)
{
  isVisited[node] = true;
  seqdfs[dfsIdx++] = node;

  for (size_t i = 0; i < graph[node].size(); i++)
  {
    int next = graph[node][i];
    if (!isVisited[next])
    {
      dfs(next);
    }
  }
}

void bfs(int start)
{
  queue<int> q;
  q.push(start);
  isVisited[start] = true;

  seqbfs[bfsIdx++] = start;

  while (!q.empty())
  {
    int node = q.front();
    q.pop();

    for (size_t i = 0; i < graph[node].size(); i++)
    {
      int next = graph[node][i];
      if (isVisited[next] == false)
      {
        q.push(next);
        isVisited[next] = true;
        seqbfs[bfsIdx++] = next;
      }
    }
  }
}

int main()
{

  cin >> n >> m >> v;

  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for (int i = 1; i <= n; i++)
  {
    sort(graph[i].begin(), graph[i].end());
  }

  memset(seqdfs, 0, sizeof(seqdfs));
  memset(seqbfs, 0, sizeof(seqbfs));

  seqbfs[0] = v;
  seqbfs[0] = v;
  dfs(v);

  for (int i = 0; i < dfsIdx; i++)
  {
    cout << seqdfs[i] << " ";
  }
  cout << "\n";

  memset(isVisited, 0, sizeof(isVisited));

  bfs(v);
  for (int i = 0; i < bfsIdx; i++)
  {
    cout << seqbfs[i] << " ";
  }

  return 0;
}

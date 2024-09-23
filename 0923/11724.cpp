#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1001];
int isvisited[1001];
int connect = 0;

void DFS(int node);

int main(){
    int n,m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        if(!isvisited[i+1]){
            connect++;
            DFS(i+1);
        }
    }

    cout << connect << endl;
}

void DFS(int node){
    isvisited[node] = true;
    for(int i = 0; i < graph[node].size(); i++){
        int next = graph[node][i];
        if(!isvisited[next]){
            DFS(next);
        }
    }
}
#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> graph[501];
bool isvisited[501];
bool isSfriend[501];
int num = 0;

void findFriends();

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    isvisited[1] = true;

    findFriends();

    cout << num << endl;

    return 0;
}

void findFriends() {
    for (int i = 0; i < graph[1].size(); i++) {
        int node = graph[1][i];
        if (!isvisited[node]) {
            isvisited[node] = true;
            isSfriend[node] = true;
            num++;
        }
    }

    for (int i = 0; i < graph[1].size(); i++) {
        int node = graph[1][i];
        for (int j = 0; j < graph[node].size(); j++) {
            int friendOfFriend = graph[node][j];
            if (!isvisited[friendOfFriend]) {
                isvisited[friendOfFriend] = true;
                num++;
            }
        }
    }
}

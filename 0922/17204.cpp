#include <iostream>

using namespace std;

int K, num = 0;
int arr[150], visited[150];

int check(int node);

int main(){

    int N;
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin>> arr[i]; //각자 지목하는 사람
        visited[i] = false; //방문여부 - 초기값 false
    }

    check(0);

    cout << num << endl;
    return 0;
}

int check(int node){
    while (!visited[node]) {
        visited[node] = true;
        num++; // 횟수 카운트
        
        if (arr[node] == K) {
            return num; // 보성이를 찾음
        }
        
        node = arr[node]; // 다음 사람으로 넘어감
    }
    num = -1; // 싸이클 발생 시
    return num;
}
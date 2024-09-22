#include <iostream>

using namespace std;

int K;
int num = 0;
int arr[150];
int visited[150];

int check(int node);

int main(){

    int N;
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin>> arr[i]; //각자 지목하는 사람
        visited[i] = false; //방문여부 - 초기값 false
    }

    for(int i = 0; i < N; i++){
        if(!visited[i]){ //방문한 적 없으면
            int tmp = check(i);
        }
        break; //위의 조건문에서 나왔다는 것은 보성이를 찾았거나 찾지못했을 경우이기에 더이상 돌 필요가 없다.
    }

    cout << num << endl;
    return 0;
}

int check(int node){
    num++; // 숫자 카운트
    visited[node] = true; // 방문했다고 변경
    int next = arr[node];

    if(arr[node] == K) {
        return num; // 보성이를 찾음
    } else if (!visited[next]) {
        return check(next); // 그 다음 사람으로 넘어가기
    } else {
        num = -1; // 이미 방문한 arr[node]에 접근 = 사이클이 생김
    }

    return num;
}
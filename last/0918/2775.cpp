#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> people; // 메모이제이션을 위한 2차원 벡터

int numCount(int k, int n);

int main() {
    int T; // 테스트 케이스 수
    cin >> T;
    
    vector<int> results(T);
    
    for (int i = 0; i < T; i++) {
        int k, n;
        cin >> k >> n;
        
        // 벡터 크기 조정
        people = vector<vector<int>>(k + 1, vector<int>(n + 1, -1));
        
        results[i] = numCount(k, n);
    }

    for (int i = 0; i < T; i++) {
        cout << results[i] << endl;
    }
    
    return 0;
}

int numCount(int k, int n) {
    // 이미 계산된 값이 있으면 그 값을 반환
    if (people[k][n] != -1) {
        return people[k][n];
    }

    // 0층의 n호는 n명이 살고 있음
    if (k == 0) {
        return people[k][n] = n;
    }

    // 각 층의 1호에는 사람이 1명 살고 있음
    if (n == 1) {
        return people[k][n] = 1;
    }

    // k층 n호의 사람 수 = k-1층 1호부터 n호까지의 사람 수 합
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += numCount(k - 1, i);
    }

    // 계산된 값 저장
    return people[k][n] = sum;
}

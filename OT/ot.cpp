#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;

    // 상근이가 가지고 있는 카드의 개수 입력
    cin >> N;

    // 상근이가 가지고 있는 카드 저장
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // 벡터 a를 정렬하여 이진 탐색 준비
    sort(a.begin(), a.end());

    // 확인할 수의 개수 입력
    cin >> M;

    // 확인할 수 입력 및 존재 여부 출력
    vector<int> finds(M);
    for (int i = 0; i < M; i++) {
        cin >> finds[i];
    }

    // 상근이가 카드를 가지고 있는지 확인
    for (int i = 0; i < M; i++) {
        // 이진 탐색 사용
        if (binary_search(a.begin(), a.end(), finds[i])) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }

    return 0;
}
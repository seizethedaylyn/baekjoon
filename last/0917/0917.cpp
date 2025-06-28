#include <iostream>
#include <vector>

using namespace std;

vector<long long> fibo;

long long fib(int n);

int main() {
    int n;
    cin >> n;

    cout << fib(n) << endl;

    return 0;
}

long long fib(int n) {
    if (n == 0) return 0; // n이 0 이하일 때는 0 반환
    if (n == 1) return 1; // n이 1일 때는 1 반환

    // 벡터 초기화
    fibo.clear();
    fibo.push_back(0); // F(0)
    fibo.push_back(1); // F(1)

    // 피보나치 수열 계산
    for (int i = 2; i <= n; i++) {
        fibo.push_back(fibo[i-1] + fibo[i-2]);
    }

    // n이 1이면 피보나치 수열의 1번째 항을 반환, 그 외에는 n번째 항을 반환
    return fibo[n];
}

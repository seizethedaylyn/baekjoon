#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    int count[T];

    for(int a = 0; a < T; a++){
        int n;
        cin >> n;
        int c[n][2];
        int cycle = 0;

        for(int i = 0; i < n; i++){
            cin >> c[i][0];
            c[i][1] = 0; // 방문 여부 초기화
        }

        for(int i = 0; i < n; i++){
            if(c[i][1] == 1) continue; // 이미 방문한 경우 건너뜀
            
            int current = i;

            while(c[current][1] == 0){
                c[current][1] = 1; // 현재 원소 방문 처리
                current = c[current][0] - 1; // 다음 원소로 이동
            }

            cycle++; // 하나의 사이클이 찾으면 cycle 증가
        }

        count[a] = cycle;
    }

    for(int a = 0; a < T; a++){
        cout << count[a] << "\n";
    }

    return 0;
}

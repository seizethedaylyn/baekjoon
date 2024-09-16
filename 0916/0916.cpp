#include <iostream>
using namespace std;

int counts = 0; // 빙고 개수
int row(int (*binggo)[5]);
int column(int (*binggo)[5]);
int dig1(int (*binggo)[5]);
int dig2(int (*binggo)[5]);

int main() {
    int binggo[5][5];

    // 빙고판 입력
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> binggo[i][j];
        }
    }

    // 사회자가 부르는 숫자 입력
    int num[25];
    for (int i = 0; i < 25; i++) {
        cin >> num[i];
    }

    // 불러진 숫자 하나씩 처리
    for (int a = 0; a < 25; a++) {
        // 빙고판에서 해당 숫자를 0으로 만듦
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (binggo[i][j] == num[a]) {
                    binggo[i][j] = 0; // 불려진 숫자 = 0
                }
            }
        }

        // 빙고 줄 수 체크
        counts = row(binggo) + column(binggo) + dig1(binggo) + dig2(binggo);

        // 빙고가 3줄이 되면 몇 번째 숫자인지 출력 후 종료
        if (counts >= 3) {
            cout << a + 1 << endl;
            return 0;
        }
    }

    return 0;
}

// 가로 체크
int row(int (*binggo)[5]) {
    int line = 0;
    for (int i = 0; i < 5; i++) {
        int num = 0;
        for (int j = 0; j < 5; j++) {
            if (binggo[i][j] == 0) {
                num++;
            }
        }
        if (num == 5) line++;
    }
    return line;
}

// 세로 체크
int column(int (*binggo)[5]) {
    int line = 0;
    for (int j = 0; j < 5; j++) {
        int num = 0;
        for (int i = 0; i < 5; i++) {
            if (binggo[i][j] == 0) {
                num++;
            }
        }
        if (num == 5) line++;
    }
    return line;
}

// 우하향 대각선 체크
int dig1(int (*binggo)[5]) {
    int num = 0;
    for (int i = 0; i < 5; i++) {
        if (binggo[i][i] == 0) {
            num++;
        }
    }
    return (num == 5) ? 1 : 0;
}

// 우상향 대각선 체크
int dig2(int (*binggo)[5]) {
    int num = 0;
    for (int i = 0; i < 5; i++) {
        if (binggo[i][4 - i] == 0) {
            num++;
        }
    }
    return (num == 5) ? 1 : 0;
}
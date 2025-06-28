#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void quick_sort(vector<int>& data, int start, int end); // 참조로 전달
void find(vector<int> tmp, vector<int> height, int depth); // 매개변수 수정

int main() {
    vector<int> height;
    vector<int> tmp;

    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        height.push_back(num);
    }

    quick_sort(height, 0, 8);
    find(tmp, height, 0);

    return 0;
}

void find(vector<int> tmp, vector<int> height, int depth) {
    if (tmp.size() == 7 && accumulate(tmp.begin(), tmp.end(), 0) == 100) {
        for (int i = 0; i < tmp.size(); i++) {
            cout << tmp[i] << endl;
        }
        exit(0);
    }
    if (depth >= 9) {
        return;
    }

    // 포함하는 경우
    tmp.push_back(height[depth]);
    find(tmp, height, depth + 1);

    // 포함하지 않는 경우
    tmp.pop_back();
    find(tmp, height, depth + 1);
}

void quick_sort(vector<int>& data, int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot = start;
    int i = pivot + 1; // 왼쪽 출발 지점
    int j = end; // 오른쪽 출발 지점
    int temp;

    while (i <= j) {
        // 포인터가 엇갈릴 때까지 반복
        while (i <= end && data[i] <= data[pivot]) {
            i++;
        }
        while (j > start && data[j] >= data[pivot]) {
            j--;
        }

        if (i > j) {
            // 엇갈림
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        } else {
            // i번째와 j번째를 스왑
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // 분할 계산
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}

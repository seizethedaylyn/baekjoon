#include <iostream>
#include <vector>
#include <string>

using namespace std;

void merge(pair<int, string> arr[][2], int start, int mid, int end);
void merge_sort(pair<int, string> arr[][2], int start, int end);

int main() {
    int num;
    cin >> num; 
    cin.ignore();

    pair<int, string> member[num][2];

    for(int i = 0; i < num; i++) {
        int age;
        string name;
        
        cin >> age;
        cin.ignore();
        getline(cin, name);

        member[i][0] = {age, name};
    }

    merge_sort(member, 0, num - 1);

    for(int i = 0; i < num; i++) {
        cout << member[i][0].first << " " << member[i][0].second << endl;
    }

    return 0;
}

void merge(pair<int, string> arr[][2], int start, int mid, int end) {
    int left_size = mid - start + 1;
    int right_size = end - mid;

    pair<int, string> left[left_size][2];
    pair<int, string> right[right_size][2];

    for (int i = 0; i < left_size; ++i) {
        left[i][0] = arr[start + i][0];
    }
    for (int i = 0; i < right_size; ++i) {
        right[i][0] = arr[mid + 1 + i][0];
    }

    int i = 0, j = 0, k = start;
    while (i < left_size && j < right_size) {
        if (left[i][0].first <= right[j][0].first) {
            arr[k++][0] = left[i++][0];
        } else {
            arr[k++][0] = right[j++][0];
        }
    }

    while (i < left_size) {
        arr[k++][0] = left[i++][0];
    }

    while (j < right_size) {
        arr[k++][0] = right[j++][0];
    }
}

void merge_sort(pair<int, string> arr[][2], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

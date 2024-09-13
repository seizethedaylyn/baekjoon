#include <iostream>
#include <algorithm>

using namespace std;

bool condition(int a, int b);

int main() {
    int n ;
    int k;

    cin >> n >> k ;
    cin.ignore();

    int scores[n];
    for(int i = 0; i < n; i++)
        cin >> scores[i];

    sort(scores, scores + n, condition);

    cout << scores[k-1] << endl;

    return 0;
}

bool condition(int a, int b){
    return b < a;
}
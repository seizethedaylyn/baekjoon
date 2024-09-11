#include <iostream>
#include <algorithm>

using namespace std;

bool condition(string a, string b);

int main() {
    int n;
    cin >> n;

    string word[n];
    for(int i = 0 ;i<n;i++){
        cin >> word[i];
    }

    sort(word, word + n, condition);

    for(int i = 0 ; i < n; i++){
        if(word[i] == word[i-1])
            continue;
        else{
            cout << word[i] << '\n';
        }
    }

    return 0;
}

bool condition(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}
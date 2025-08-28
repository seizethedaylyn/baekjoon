#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int starIdx = -1;
  char arr[13]; 

  for(int i = 0 ; i< 13; i++){
    cin >> arr[i];

    if (arr[i] == '*') {
      starIdx = i+1;
      continue;
    }

    int d = arr[i] - '0';

    if ((i + 1) % 2 == 0) sum += 3 * d;
    else                  sum += d;
    
  }

  // cout << starIdx << "\n";

  int m = arr[12] - '0';

  // cout << sum << "\n";
  // cout << m << "\n";

  int isOdd = 3;
  if(starIdx % 2) isOdd = 1;

  // cout << isOdd;

  int num;
  for(int i = 0; i < 10; i++){
  if ((sum + isOdd * i) % 10 == 0) {
      num = i;
      break;
    }
  }
  cout << num;

}
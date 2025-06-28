#include <iostream>

using namespace std;

int n;
int sum = 0;
int answer;

void find(int input){
  sum = 0;
  int num = input;

  while(num != 0){
    int a = num%10;
    sum += a;
    num/= 10;
  }

  sum += input;

  if(sum == n) {
    if(answer > input){
      answer = input;
    }
  }

}

int main(){
  scanf("%d", &n);
  answer = n;

  for(int i = 1; i < n ; i++){
    find(n-i); 
  }

  if(answer == n) answer = 0;

  cout << answer;

  return 0;
}
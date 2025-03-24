#include <iostream>
#include <algorithm>

using namespace std;

int n,m;
int answer = 0;
int result = 0;

void find(int cards[], int index, int count, int sum){

  if(count == 3){
        if(sum <= m && sum > answer){
          answer = sum;
        }
        return;
  }
  
    for(int i = index; i<n;i++){
      find(cards, i + 1, count +1 , sum + cards[i]);
  }
}

int main(){
  cin >> n >> m;
  int cards[n];

  for(int i = 0; i<n;i++){
    scanf("%d", &cards[i]);
  }
  
  sort(cards, cards + n);


  find(cards, 0 , 0, 0);
  cout << answer;

    return 0;
}
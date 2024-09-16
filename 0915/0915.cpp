#include <iostream>

using namespace std;

int main(){
  int num; // 전체 인원수
  cin >> num;

  int people[num][2];

  for(int i = 0; i < num; i++){
    cin >> people[i][0] >> people[i][1]; // 몸무게, 키 입력
  }

  for(int i = 0; i < num; i++){
    int rank = 1; // 등수의 최소값 1, 등수 초기화
    for(int j = 0; j < num; j++){
      if(i != j){ // 비교 대상에서 나는 제외!
        if(people[i][0] < people[j][0] && people[i][1] < people[j][1]) // 나 이외의 사람들의 몸무게와 키 모두 크다면
          rank++; // 나의 등수가 하나씩 올라간다
      }
    }
    cout << rank << " ";
  }

  cout << endl;

  return 0;
}
#include <iostream>

using namespace std;

int main(){
  int num[5];
  int tmp;

  for(int i = 0; i < 5; i++){
    cin >> num[i];
  }

  for(int i = 4; i > 0; i--){
    for(int j =0; j < i; j++){
      if(num[j] > num[j+1]){
        tmp = num[j+1];
        num[j+1] = num[j];
        num[j] = tmp;
        for(int k = 0; k < 5; k++)
          cout << num[k] << " ";
        cout << "\n";
      }
    }
  }

  return 0;
}
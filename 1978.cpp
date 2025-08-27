#include <iostream>

using namespace std;

int pnum = 0;
int c = 0;
int n[100];
int main(){
  int a;
  cin >> a;

  for(int i =0; i < a; i++){
    int num;
    cin >> num;
    n[i] = num;
    c = 0;

    for(int k = 1; k <= n[i]; k++){
      if(! (n[i] % k)) c++;
      if(c > 2) break;
    }
      if(c == 2) pnum++;
  }

  cout << pnum;

}
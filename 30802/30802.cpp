#include <iostream>

using namespace std;

int main(){

int N;
int T, P;
int arr[6];
int A = 0;
int B = 0;
int C = 0;

cin >> N;
for(int i = 0 ; i< 6; i++){
  int a; 
  cin >> arr[i];
}
cin >> T >> P;

for(int i = 0; i < 6; i++){
	//신청자수 / T 만큼 더하고 나머지가 있으면 +1
    A += arr[i] / T;
    if(arr[i] % T) A++;
}

B = N / P;
C = N % P;

cout << A << "\n";
cout << B << " " << C;
}
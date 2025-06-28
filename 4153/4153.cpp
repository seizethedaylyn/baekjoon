#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
  int a, b, c;
  int x, y;

  vector<int> tri;

  while (1)
  {
    cin >> a >> b >> c;

    if(a==0 && b==0 && c==0){
      break;
    }

    tri.push_back(a);
    tri.push_back(b);
    tri.push_back(c);

    sort(tri.begin(), tri.end());

    int t = tri.back();
    x = pow(t, 2);
    tri.pop_back();

    t = tri.back();
    y = pow(t, 2);
    tri.pop_back();

    t = tri.back();
    y += pow(t,2);
    tri.pop_back();

    if(x == y){
      cout << "right" << "\n";
    }else {
      cout << "wrong" << "\n";
    }

  }
}
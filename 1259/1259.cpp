#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  int a;
  int b;

  while (1)
  {
    cin >> a;

    if (a == 0)
      break;

    string str;
    str = to_string(a);

    reverse(str.begin(), str.end());

    b = stoi(str);

    if (a == b)
      cout << "yes" << "\n";
    else
      cout << "no" << "\n";
  }

  return 0;
}
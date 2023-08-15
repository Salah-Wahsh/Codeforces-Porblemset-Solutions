#include <iostream>
using namespace std;

int main()
{

  int a, b, ctr = 0;
  cin >> a >> b;
  while (!(a > b))
  {
    a *= 3;
    b *= 2;
    ctr++;
  }
  cout << ctr;
  return 0;
}
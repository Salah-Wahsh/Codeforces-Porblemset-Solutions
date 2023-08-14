#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char s[50];
  int ctr = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    if (i >= 1)
    {
      if (s[i - 1] == s[i])
      {
        ctr++;
      }
    }
  }
  cout << ctr;

  return 0;
}
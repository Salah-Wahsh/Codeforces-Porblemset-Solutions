
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
	string s;
	cin >> s;
	char chr;
	for (int i = 0; i < s.size(); i++)
	{
		if (i == 0) {
			chr= toupper(s[0]);
			cout << chr;
		}
		else {
			cout << s[i];
		}

	}


	return 0;

}

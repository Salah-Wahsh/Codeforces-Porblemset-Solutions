#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;
int main() {

	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(),
		[](unsigned char c) { return std::tolower(c); });

	transform(s2.begin(), s2.end(), s2.begin(),
		[](unsigned char c) { return std::tolower(c); });

	if (s1 == s2) {
		cout << 0;
	}
	else if (s1 > s2) {
		cout << 1;
	}
	else {
		cout << -1;
	}


}

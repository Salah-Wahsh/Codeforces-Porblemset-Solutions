
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
	int ctr=0;
	string s;
	string res="";
	cin >> s;

	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '+') {
			ctr++;

		}

	}
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] != '+') {
			if (res=="")
			{
				res = s[i];
			}
			else{
			if (ctr != 0) {
				res = res + '+' + s[i];

			}
			}

		}
	}



		cout << res;
		return 0;

}

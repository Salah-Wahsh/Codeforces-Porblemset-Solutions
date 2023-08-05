#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> distinctChars;
    for (char ch : s) {
        distinctChars.insert(ch);
    }

    int distinctCount = distinctChars.size();
    if (distinctCount % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
#include<iostream>
#include<string>
using namespace std;
string tooLong(string s) {
    if (s.size() <= 10) {
        return s;
    }
    else {
        return s[0] + to_string(s.size() - 2) + s[s.size() - 1];
    }

}
int main() {
    int n;
    int vote, realCtr=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ctr = 0;
        for (int j=0; j < 3; j++) {
            cin >> vote;
            if (vote == 1) {
                ctr++;
            }
            if (j == 2) {
                if (ctr >= 2) {
                    realCtr++;
                }
            }
        }
    

    }
    cout << realCtr << endl;
}
#include <iostream>
using namespace std;
int main() {
    

    int n,ctr=0;
    string stmt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stmt;
        if (stmt == "x++" || stmt == "++x") {
            ctr++;
        }
        else if (stmt== "x--" || stmt == "--x") {
            ctr--;
        }
        else {
            break;
        }
    }
    cout << ctr;
    
    return 0;
}

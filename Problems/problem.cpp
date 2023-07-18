#include<bits/stdc++.h>
using namespace std;

int main() {
    string S = "Hello, X! How are you, X?";
    string X = "X";
    string rep = "$";

    int start = 0;
    int found = 0;

    while (true) {
        found = S.find(X, start);
        if (found == -1) {
            break;
        }
        S.replace(found, X.length(), rep);
        start = found + rep.length();
    }

    cout << S << endl;

    return 0;
}

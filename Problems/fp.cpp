#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string S,X;
        cin>>S>>X;
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

    }
    
    return 0;
}
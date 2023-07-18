#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    // getchar();
    cin.ignore();
    string s;
    // cin>>s;
    getline(cin,s);
    for (auto i = s.begin(); i < s.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<x;
    // cout<<s;
    return 0;
}
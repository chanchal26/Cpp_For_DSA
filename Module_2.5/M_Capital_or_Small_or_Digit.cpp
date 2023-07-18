#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>=65 && x<=122)
    {
        if(x<=90 && x>=65)
        {
            cout<<"ALPHA\nIS CAPITAL";
        }else if (x>=97 && x<=122)
        {
            cout<<"ALPHA\nIS SMALL";
        }
        
    }else if (x>=48 && x<=57)
    {
        cout<<"IS DIGIT";
    }
    
    return 0;
}
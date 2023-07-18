#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=25;
    void hello()
    {
        cout<<"hello rakib";
    }
}
namespace sakib
{
    int age=35;
    void hello()
    {
        cout<<"hello sakib"<<endl;
    }
}
using namespace sakib;
int main()
{
    cout<<age<<endl;
    hello();
    rakib ::hello();
    return 0;
}
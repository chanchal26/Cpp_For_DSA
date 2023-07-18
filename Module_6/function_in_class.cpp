#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        float height;
        int weight;

        Person(string n,int a,float h,int w)
        {
            name=n;
            age=a;
            height=h;
            weight=w;
        }
        void hello()
        {
            cout<<"Hello World"<<endl;
        }
        float multiple()
        {
            float mul=height*weight;
            return mul;
        }
};
int main()
{
    Person sakib("Sakib Al Hasan",27,5.8,72);
    cout<<sakib.multiple();
    return 0;
}
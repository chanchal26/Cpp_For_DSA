#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void hello()
        {
            cout<<"Hello World"<<endl;
        }
};
int main()
{
    Person sakib("sakibul",29);
    cout<<sakib.name<<endl;
    return 0;
}
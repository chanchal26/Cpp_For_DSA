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
};
int main()
{
    Person *sakib=new Person("sakib al hasan",29);
    Person *rakib=new Person("rakib ahsan",27);
    *sakib=*rakib;
    cout<<rakib->name<<" "<<rakib->age;
    return 0;
}
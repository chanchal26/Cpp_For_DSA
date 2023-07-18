#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
    Person(char n[],float h,int a)
    {
        strcpy(name,n);
        height=h;
        age=a;
    }
};
int main()
{
    char name[100]="Chanchal Hossain";
    char name2[100]="abir Chowdhury";
    Person *chanchal=new Person(name,5.8,25);
    Person *abir=new Person(name2,5.5,26);

    if(chanchal->age > abir->age){
        cout<<chanchal->name<<endl;
    }else{
        cout<<abir->name<<endl;
    }
    
    return 0;
}
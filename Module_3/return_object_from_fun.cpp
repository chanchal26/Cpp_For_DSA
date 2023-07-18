#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int cls;
    Student (int c,char n[],int r,char s)
    {
        strcpy(name,n);
        roll=r;
        section=s;
        cls=c;
    }
};
Student fun()
{
char name[100]="Rahim Khan";
Student r(12,name,77,'D');
return r;
}
int main()
{
    Student rahim=fun();
    cout<<rahim.name<<endl;
    // cout<<karim.name<<endl;
    cout<<rahim.roll<<endl;
    // cout<<karim.roll<<endl;
    return 0;
}
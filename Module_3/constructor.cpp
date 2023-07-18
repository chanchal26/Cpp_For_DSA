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
int main()
{
    Student rahim(12,"Rahim Khan",98,'A');
    Student karim(12,"Karim Ullah",99,'B');
    cout<<rahim.name<<endl;
    cout<<karim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<karim.roll<<endl;
    return 0;
}
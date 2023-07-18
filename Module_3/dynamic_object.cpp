#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
    Student(char n[],int r,int c,char s)
    {
        strcpy(name,n);
        roll=r;
        cls=c;
        section=c;

    }
};
int main()
{
    char name[100]="Rahim Khan";
    // Student rahim(name,65,12,'A');
    Student *rahim=new Student(name,65,12,'A');
    cout<<rahim->name<<endl;
    return 0;
}
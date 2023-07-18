#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int cls;
};
int main()
{
    Student rahim;
    char nm[100]="Rahim";
    strcpy(rahim.name,nm);
    rahim.roll=99;
    rahim.cls=12;
    rahim.section='C';

    Student karim;
    char nme[100]="Karim";
    strcpy(karim.name,nme);
    karim.roll=88;
    karim.cls=11;
    karim.section='A';

    cout<<rahim.cls<<endl<<karim.roll;
    return 0;
}
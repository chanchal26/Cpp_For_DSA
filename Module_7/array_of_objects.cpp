#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].name<<endl;
        cout<<arr[i].roll<<endl;
        cout<<arr[i].marks<<endl;
    }
    
    return 0;
}
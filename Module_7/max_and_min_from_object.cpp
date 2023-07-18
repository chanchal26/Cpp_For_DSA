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
    Student mx;
    mx.marks=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(arr[i].marks>mx.marks){
            mx=arr[i];
        }
    }
    Student mn;
    mn.marks=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if(arr[i].marks<mn.marks){
            mn=arr[i];
        }
    }
    
    cout<<mn.name<<" "<<mn.marks<<" "<<mn.roll<<endl;
    cout<<mx.name<<" "<<mx.marks<<" "<<mx.roll<<endl;
    return 0;
}
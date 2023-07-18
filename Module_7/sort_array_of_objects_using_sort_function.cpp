#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a,Student b){
    if(a.marks<b.marks) return true;
    else return false;
}
int main()
{
    Student arr[2];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        getchar();
    }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = i+1; j < 3; j++)
    //     {
    //         if(arr[i].name>arr[j].name){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
        
    // }
    sort(arr,arr+2,cmp);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].marks<<" "<<arr[i].roll<<endl;
    }
    return 0;
}
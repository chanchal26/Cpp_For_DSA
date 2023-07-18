#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
};
int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].s>>arr[i].id;
    }
    int j=n-1;
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i].id,arr[j].id);
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<endl;
    }
    return 0;
}
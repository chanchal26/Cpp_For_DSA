#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((arr[i].math_marks+arr[i].eng_marks) < (arr[j].math_marks+arr[j].eng_marks)){
                swap(arr[i],arr[j]);
            }else if ((arr[i].math_marks+arr[i].eng_marks) == (arr[j].math_marks+arr[j].eng_marks))
            {
                if(arr[i].id > arr[j].id){
                    swap(arr[i],arr[j]);
                }
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
    }
    return 0;
}
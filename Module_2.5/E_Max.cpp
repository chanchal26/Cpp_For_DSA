#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long int my_max=0;
    int j=n-1;
    for (int i = 0; i < n/2; i++)
    {
        if(arr[i]>arr[j])
        {
            my_max=arr[i];
        }else{
            my_max=arr[j];
        }
        j-1;
    }
    cout<<my_max;
    return 0;
}
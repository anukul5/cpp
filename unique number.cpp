#include<iostream>
using namespace std;
int main()
{
    int ans,no,i,n;
    ans=0;
    cin>>n;
    cin>>no;
    for(i=0;i<n-1;i++)
    {
        cin>>no;
        ans=ans^no;
    }
    cout<<no;
}
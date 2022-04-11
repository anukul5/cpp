#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n,i,c;
    n=sizeof(a)/sizeof(int);
    cin>>c;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    cout<<c;
}
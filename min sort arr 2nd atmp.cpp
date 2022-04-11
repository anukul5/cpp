#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j,b[n],count=0;
     for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(b[i]!=a[i])
        {
            count++;
        }
    }
    cout<<count/2;

}
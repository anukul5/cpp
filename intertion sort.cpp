#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j,key;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
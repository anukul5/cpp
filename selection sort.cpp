#include<iostream>
using namespace std;
int main()
{
    int i,j,n,min;
    int a[10];
    n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            swap(a[min],a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
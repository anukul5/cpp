#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,lar;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lar=a[0];
    for(i=1;i<n-1;i++)
    {
        lar=max(lar,a[i]);
    }
    cout<<lar;
}
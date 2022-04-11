#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j,sum=0,mx=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   sum=a[i]+a[j];
                   if(Sum>0)
                   {
                       
                   }
                   mx=max(mx,sum);

               }
           }
    cout<<mx;


}
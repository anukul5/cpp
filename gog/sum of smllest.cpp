#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i,j,sum=0,mx=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                sum=arr[i]+arr[j];
                mx=max(mx,sum);
            }
    }
       cout<<mx;
    
}
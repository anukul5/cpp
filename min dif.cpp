#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int mint,minn=INT_MAX;
    for(i=n;i>0;i--)
    {
        mint=a[i]-a[i-1];
        minn=min(minn,mint);
    }
    cout<<minn;
}
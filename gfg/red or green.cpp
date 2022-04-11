#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int r=0,g=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='R')
        {
            r++;
        }
        else
        g++;
    }
    //cout<<r<<"     "<<g;
    m=max(r,g);
    cout<<n-m;
    
}
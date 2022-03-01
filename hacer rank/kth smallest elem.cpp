#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p,i=1,j=1,k=1;
    p=n*m;
    int a[p];
    for(i=1;i<=n;i++)
    {
         for(j=1;j<m+1;j++)
        {
            a[k]=i*j;
            k++;
        }
    }
    sort(a,a+p);
    int y,c=0;
    cin>>y;
    for(i=1;i<p;i++)
    {
        if(a[i]!=a[i+1])
        {
            c++;
        }
        if(y==c)
        {
            cout<<a[i];
            return 0; 
        }
    }


    

}
#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=((n+1)-i);j++)
        {
            cout<<j<<" ";
        }
        for(k=1;k<i;k++)
        {
                cout<<"*";
        }
        cout<<"\n";
    }
}
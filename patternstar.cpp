#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";

        }
        cout<<"  ";
        for(k=1;k<=((n-i)+1);k++)
        {
            cout<<"*";
        }
    cout<<"  ";
        for(l=1;l<=((n-i)+1);l++)
        {
            cout<<"*";
        }
        cout<<"  ";
        for(m=1;m<=i;m++)
        {
            cout<<"*";
        }
    cout<<"\n";
    }
}
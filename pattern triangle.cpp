#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,j,k,l,a=1,b=2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"\t";
        }
        for(k=1;k<=i;k++)
        {
            cout<<a<<"\t";
            a++;
        }
        a--;
        for(l=2;l<=i;l++)
        {
            cout<<b<<"\t";
            b++;
        }
        b--;
        b=b*2;
        cout<<"\n";
    }
}
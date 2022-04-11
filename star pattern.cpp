#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    cout<<"enter the number of star row";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           cout<<"*";
        }
        cout<<"\n";

            
    }
}

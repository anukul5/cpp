#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int i,j,n,a=1;
    cout<<"enter the number of row";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j<=i)
            {
            cout<<a;
            }
            a++;
        }
     cout<<"\n";
    }
}
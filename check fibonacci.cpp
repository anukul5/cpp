#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,a=0,b=1,c;
    cin>>n;
    if(n==1)
    {
        cout<<"0";
        return 0;
    }
    cout<<a<<"\n";
    cout<<b<<"\t";

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==2)
            {
                i++;
            }
            c=a+b;
            a=b;
            b=c;
            cout<<c<<"\t";
        }
        cout<<"\n";
    }
}
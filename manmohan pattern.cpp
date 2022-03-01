#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                cout<<"1";
            }
            else if(j==1||j==i)
            {
                cout<<"1";

            }
            else
            cout<<"0";
        }
        cout<<"\n";
    }
}
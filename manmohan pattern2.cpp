#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,j,a=2;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    cout<<"1"<<"\n";
    cout<<"11"<<"\n";
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            
            if(j==2||j==i)
            {
                cout<<a;
            }
            else
            cout<<"0";
        }
        cout<<"\n";
        a++;
    }
}
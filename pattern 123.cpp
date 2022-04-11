#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,j;
    cout<<"Enter the number of term";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;

        }
        cout<<"\n";
    }

}
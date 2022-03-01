#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n1,n2,i,a=1;
    cin>>n1;
    cin>>n2;
    for(i=1;a!=n1+1;i++)
    {
        int c=((3*i)+2);
        if(c%n2!=0)
        {
            cout<<c<<"\n";
            a++;
        }

    }
}
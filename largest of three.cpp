#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    {
        if(a>=b && a>=c)
        cout<<a;
        else if(b>=a && b>=c)
        cout<<b;
        else
        cout<<c;
    }
}
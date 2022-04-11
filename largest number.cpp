#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int a,b,c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    cout<<"enter the third number";
    cin>>c;
    if(a>=b&&a>=c)
    cout<<a<< "is greaterst ";
    else if (b>=a&&b>=c)
    cout<<b<<" is greaterst";
    else
    cout<<c<<" is greaterst";

}
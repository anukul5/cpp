#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    cout<<"enter the principal amount";
    cin>>p;
    cout<<"enter the rate ";
    cin>>r;
    cout<<"enter the time";
    cin>>t;
    si=(p*r*t)/100.0;
    cout<<"the si = "<<si;
}
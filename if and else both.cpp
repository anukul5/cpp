#include<iostream>
using namespace std;
#include<stdio.h>
int main ()
{
    int a;
    cin>>a;
    if(a%2==0)
    {
        lable_1: cout<<"hello";
        goto lable_2;
    }
    else
    {
        goto lable_1;
        lable_2: cout<<" world";
    }

}
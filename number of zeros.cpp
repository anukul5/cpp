#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    cout<<"enter the number";
    int a[10],c=1;
    gets(a);
    for(int i=1;i<4;i++)
    {
        if(a[i]==0)
        c++;
    }
    cout<<"number of zeros ="<<c;
}
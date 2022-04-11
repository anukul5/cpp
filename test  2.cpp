#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int i,n;
    cin>>n;
    for (i = 0; i <10; i++)
    {
        if(i==n)
        continue;
        else
        cout<<i;
    }
    
    
}
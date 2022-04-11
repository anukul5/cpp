#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int a,b,z=0;
    cin>>a;
    for(int i=0;i<4;i++)
    {
        b=a%10;
        a=a/10;
        if(b==0)
        z++;
        
    }
    cout<<z;
    return 0;
}



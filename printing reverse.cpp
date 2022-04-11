#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int n,i,a;
    cin>>n;
    for(i=1;n!=0;i++)
    {
        a=n%10;
        n=n/10;
        cout<<a;
    }
    

}
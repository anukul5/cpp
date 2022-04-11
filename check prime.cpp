#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int a,i;
    cin>>a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"Not Prime";
            return 0;
        }
          
    }
    cout<<"Prime";
}
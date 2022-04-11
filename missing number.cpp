#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,8,9};
    int i;
    for(i=1;i<10;i++)
    {
        if(a[i]==i)
        return 0;
        else
        cout<<"missing number is"<<i;

    }
}
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i, j, rows;
    cin>>rows;
    for ( i = 1; i<=rows; i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=rows;j++)
        {
            if(i==1 || j==1 || i==rows||j==rows)
            cout<<"*";
            else
            cout<<" ";
        }
        
        cout<<"\n";
    }
    

   
}
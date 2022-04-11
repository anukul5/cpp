#include<iostream>
using namespace std;
#include<conio.h>
#include<stdio.h>
#include<climits>
int main()
{
    int lar,min,n,i,a[100],sum=0;
    lar= INT_MIN;
    min=INT_MAX;
    cout<<"how many no. u want to check";
    cin>>n;
    for ( i = 0; i<=n; i++)
    {
      cout<<"enter the "<<i<<" number"<<"\n";
      cin>>a[i];
    }
    for ( i = 0; i<=n; i++)
    {
        if(lar<a[i])
        lar=a[i];
        sum=sum+a[i];
    }
    for ( i = 0; i <=n; i++)
    {
        if(min>a[i])
        min=a[i];
    }
    cout<<"largest number is "<<lar<<"\n";
    cout<<"the smallest number is "<<min<<"\n";
    cout<<"the sum = "<<sum<<"\n";
    cout<<"the mean="<<sum/n;


    
    
    

}


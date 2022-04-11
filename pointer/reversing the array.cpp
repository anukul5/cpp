#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(a)/sizeof(int);
    int i,j;
    i=0;
    j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k=0;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int temp[n*n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp[k]=a[i][j];
            k++;
        }
    }
    sort(temp,temp+n);
     for(i=0;i<n*n;i++)
    {
       cout<<temp[i]<<" ";
    }
}
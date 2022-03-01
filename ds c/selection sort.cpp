#include <iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main() {
    int n;
    int mint=INT_MAX;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
           if(a[j+1]<mint)
           {
               mint=a[j+1];
               cout<<mint<<" ";
           }
        }
        swap(a[i],mint);
    }
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
}

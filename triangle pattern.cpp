#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,a=1,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<a;
            a++;
        }
        for(l=2;l<=i;l++)
        {  
          if(i>1)
          {
              cout<<a;
          } 
        }

        cout<<"\n";
    }
}
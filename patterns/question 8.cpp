/*
    *         * 
      *    *
         *
      *     *
    *          *
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,k,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j or i+j==n)
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
            
        }
        cout<<endl;
    }
}
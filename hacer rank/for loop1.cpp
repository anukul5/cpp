#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(i=a;i<b-1;i++)
    {
        if(i<=9)
        cout<<c[i]<<"\n";
        else
        {
        cout<<"nine"<<"\n";
        i=b;
        }
    }
    for(i=a;i<b;i++)
    {
        if(i<=9)
        {
        if(i%2==0)
        {
            cout<<"even"<<"\n";
        }
        else
        cout<<"odd"<<"\n";
        }
        else
        {
            if(i>9)
            {
                 if(i%2==0)
        {
            cout<<"even"<<"\n";
        }
        else{
        cout<<"odd"<<"\n";
        i=b;
        }

            }
        }
    }
    
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,m=0;
        int p=0,q=0;
        cin>>m>>n;
        p++;
        while(1)
        {
            if(p>=m)
            {
                cout<<"Harshit";
                return 0;
            }
            else if(q>=n)
            {
                cout<<"Aayush";
                return 0;
            }
            else{
            q=p+1;
            p=q+1;
            }
        }

    }
}
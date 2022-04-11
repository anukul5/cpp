#include<iostream>
using namespace std;
int main()
{
    int cnt=0,m=1,i,a;
    cin>>a;
    for(i=0;a>0;i++)
    {
        if((a&m)==1)
            cnt++;
        a=a>>1;

    }
    cout<<cnt;
}
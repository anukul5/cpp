#include<iostream>
using namespace std;
int main()
{
    //test case
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        int a[n],b[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<m;j++)
        {
            cin>>b[j];
        }
        i=0;
        j=0;
        int res=0;
        int si=0,sj=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                si+=a[i];
                i++; 
            }
            else if(a[i]>b[j])
            {
                sj+=b[j];
                j++;
            }
            else
            {
                res+=max(si,sj)+a[i];
                si=0;
                sj=0;
                i++,j++;

            }
        }
            while(i<n)
            {
                si+=a[i];
                i++;
            }
            while(j<n)
            {
                sj+=b[j];
                j++;
            }
            cout<<max(si,sj)+res<<endl;
        
    }
}
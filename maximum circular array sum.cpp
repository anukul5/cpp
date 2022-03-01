#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;
        int curmax=0;
        int curmin=0;
        int totalsum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            totalsum+=a[i];
            //maxsub
            curmax=max(curmax+a[i],a[i]);
            maxsum=max(curmax,maxsum);
            //minimum subaaraysum;
            curmin=min(curmin+a[i],a[i]);
            minsum=min(curmin,minsum);  
        }
        if(maxsum<0)
        {
            cout<<maxsum<<endl;
        }
        else{
            cout<<max(maxsum,totalsum-minsum)<<endl;
        }
    }
}
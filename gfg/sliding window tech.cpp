#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,k,j,mi=INT_MAX,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value of the k";
    cin>>k;
   /* for(i=0;i<n;i++)
    {
        for(j=i;j<i+k;j++)
        {
            if(i+k>n)
            {
                cout<<"teh minimum sum ="<<mi;
                return 0;
            }
            cout<<a[j]<<"+";
            sum+=a[j];
        }
        mi=min(mi,sum);
    }
    cout<<endl;
    cout<<"the minimum sum of the array is "<<mi<<endl;*/ //this is the alternate meathod with higher time complexity;
    //now sliding window technique in this we will all k+1 element and we will substract the i-1th element;
    for(i=0;i<k;i++)
    {
        sum+=a[i];

    }
   for(i=0;i<n-k;i++)
    {
        mi=min(sum,mi);
        sum=sum-a[i];
        sum=sum+a[k];
        k++;
        
    }
    cout<<"the sum= "<<mi;

}
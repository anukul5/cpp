#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int s=a.length();
    int i,j;
    for(i=0;i<s;i++)
    {
        j=i+1;
        while(j<s)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<s;k++)
                {
                    a[k]=a[k+1];
                }
            }
            else if (a[i]!=a[j])
            {
                j++;
            }
        }
    }
    cout<<a;
}//code running fine but time complexity is n^3 so find a better version..
//this code is unable to remove more than one repeated letters.

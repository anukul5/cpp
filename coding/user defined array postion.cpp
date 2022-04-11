#include<iostream>
using namespace std;
int main()
{
    int n,p,e,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"how many elements you want to push "<<endl;
    int np;
    cin>>np;
    int arr[n+np];
    cout<<"enter the array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(np--)
    {
        cout<<"enter the position "<<endl;
        cin>>p;
        for(i=n+1;i>=p;i--)
        {
            arr[i]=arr[i-1];
        }
        cout<<"enter the element to push "<<endl;
        cin>>e;
        arr[p]=e;
        n=n+1;
        cout<<"done!"<<endl;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

}
//https://practice.geeksforgeeks.org/problems/doubling-the-value4859/1/?category[]=Searching&category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1category[]Searching
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f;
    cin>>f;
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            f=a[i]*2;
        }
    }
    cout<<f;
//successful...
}
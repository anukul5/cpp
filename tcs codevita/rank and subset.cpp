#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;//size of the subset
    string set;
    cin>>set;
    int count=0;
    int p=set.length();
    for(int i=0;i<p;i++)
    {
        if(set[i]==',')
        count++;
    }
    cout<<pow(2,count)+1;

}
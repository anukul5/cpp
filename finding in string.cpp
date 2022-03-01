#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter the main string";
    cin>>a;
    cout<<"enter the para to be found";
    cin>>b;
    if(a.find(b)!=string::npos)
    cout<<"para is found in the string at "<<a.find(b)<<" pos";
    else
    cout<<"no match found";
    
}
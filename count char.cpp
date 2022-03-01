#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int c=0,a=0,d=0,s=0,i;
    char ch;
    ch=cin.get();
    for(i=1;ch!='$';i++)
    {
        if(ch>='A' and  ch<='Z' || ch>='a' and ch<='z')
        {
            a++;
        }
        else if(ch>='0' && ch<='9')
        d++;
        else if(ch==' ' || ch=='\n' || ch=='\t')
        s++;
        else
        c++;
        ch=cin.get();
    }
    cout<<"no of alphabet ="<<a<<"\n";
    cout<<"no of digits ="<<d<<"\n";
    cout<<"no of spaces = "<<s<<"\n";
    cout<<"other characters ="<<c<<"\n";
}
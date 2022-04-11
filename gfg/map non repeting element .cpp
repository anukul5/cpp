#include<iostream>
#include<map>
using namespace std;
//THIS PROGRAM FIRST STORE ALL THE ELEMENT AND NUMBER OF TIMES ITS REPEATED AND THEN APPLY THE LOGIC THAT IF IT OCCUR MORE THEN ONE TIME DONT SHOW IT'
int main()
{
    string a;
    string ans;
    getline(cin,a);//to take input with the spaces;
    int i;
    map<char,int>m;
    for(i=a.length();i>=0;i--)
    {
        m[a[i]]++;
    }
    for(i=a.length();i>=0;i--)
    {
        if(m[a[i]]==1 and a[i]!=' ')
        {
            ans+=a[i];//APPEND
        }
        
    }
    cout<<ans;


    
}
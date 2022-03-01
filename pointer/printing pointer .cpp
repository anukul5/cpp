#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int*y=&x;
    cout<<" x= "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"&y ="<<&y<<endl;
    cout<<"*&x="<<*&y<<endl;
    int n=sizeof(*y);
    cout<<"size of pointer"<<n<<endl;

}
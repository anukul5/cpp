#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int no;
	cin>>n;
	for(no=2;no<=n;no++)
	{
		bool isprime=true;
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			{
				isprime=false;
			}
			if(isprime==true)
			{
				cout<<no<<'\n';

			}
		}
	}
	return 0;


}
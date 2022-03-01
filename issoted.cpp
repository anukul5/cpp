#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			cout<<"false";
            return 0;
		}
	}
	cout<<"true";
}
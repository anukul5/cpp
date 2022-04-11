#include<iostream>
 int d (double p)
 {
	 return ceil (sqrt(2*365*log(1/(1-p))));
 }
 int main()
 {
	 int p;
	 cin>>p;
	 cout<<d(p);
 }

}
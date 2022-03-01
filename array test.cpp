// C++ program to demonstrate that array elements
// are stored contiguous locations

#include <iostream>
using namespace std;

int main()
{
	int arr[5], i;
    for(i=0;i<5;i++)\
    {
        cin>>arr[i];
    }

	cout << "Size of integer in this compiler is "
		<< sizeof(int) << "\n";

	for (i = 0; i < 5; i++)
		// The use of '&' before a variable name, yields
		// address of variable.
		cout << "Address arr[" << i << "] is " << arr[i]
			<< "\n";

	return 0;
}

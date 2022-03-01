/*Input: N = 7, A = 2, B = 5
arr[] =  {1, 4, 5, 2, 7, 8, 3}
Output: Yes
Explanation: It has elements between 
range 2-5 i.e 2,3,4,5*/
#include<iostream>
using namespace std;
int main()
{
    int N,A,B;
    cin>>N>>A>>B;
    int arr[N];
    int i;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int c=(B-A)+1;
    //cout<<c;
    int b[c];
    for(i=A;i<B;i++)
    {
        b[i]=i;
        //cout<<b[i]<<" ";
    }
    for(i=0;i<c+1;i++)
    {
        cout<<b[i]<<" ";

    }
}
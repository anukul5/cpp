/*QUESTION --N = 11 
M = 4
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
A2[] = {2, 1, 8, 3}
Output: 
2 2 1 1 8 8 3 5 6 7 9
Explanation: Array elements of A1[] are
sorted according to A2[]. So 2 comes first
then 1 comes, then comes 8, then finally 3
comes, now we append remaining elements in
sorted order.*/
#include<iostream>
using namespace std;
int main()
{
    int M,N,i,j;
    cin>>N>>M;
    int A1[N],A2[M];
    for(i=0;i<N;i++)
    {
        cin>>A1[i];
    }
    for(i=0;i<M;i++)
    {
        cin>>A2[i];
    }
    sort(A1,A1+N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(A1[i]==A2[j])
            {
                
            }
        }
    }
    //incomplete unable to think any ideas;


}

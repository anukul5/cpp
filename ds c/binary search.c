#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the Array ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to find in the array  ");
    int f;
    scanf("%d",&f);
    int flag=1;
    int start=0;
    int end=n;
    int mid;
    while(n--)
    {
        mid=(start+end)/2;
        if(f==a[mid])
        {
            flag=1;
            printf("Element found at %d",mid+1);
            return 0;
        }
        else if(a[mid]>f)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    if(flag==1)
    {
        printf("Element not found");
    }
}
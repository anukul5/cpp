//ANUKUL MISHRA
//LINEAR SERCH
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f;
    scanf("%d",&f);
    int  flag=1;
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            flag=0;
            printf("element found at %d",i+1);
            return 0;
        }
    }
    if (flag==1)
    {
        printf("element not found ");
    }
}
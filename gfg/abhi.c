#include<stdio.h>
int main()
{
    int n,a[20],i,j,k,temp,flagclos=0,flagas=0,flagid=0,flaginv=0,identity;
    printf("ENTER NO OF ELEMENTS TO TEST:");
    scanf("%d",&n);
    printf("ENTER ELEMETS");
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp=a[i]+a[j];
            if(sizeof(temp)!=sizeof(int))
            flagclos=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(((a[i]+a[j]+a[k])!=(a[i]+a[j+a[k]])))
                flagas=-1;
            }
        }
    }
    identity=0;
    for(i=0;i<n;i++)
    {
        if((a[i]=0)!=a[i] || sizeof(0)!=sizeof(int))
        flagid=-1;
    }

    for(i=0;i<n;i++)
    {
        if((a[i]+(-1*a[i]))!=identity || sizeof(-1*a[i])!=sizeof(int))
        flaginv=-1;
    }
    if(flagclos==-1||flagas==-1||flagid==-1||flaginv==-1)
    printf("THIS IS A GROUP");
    else
    printf("THIS IS NOT A GROUP");
    return 0;
}
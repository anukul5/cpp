#include<math.h>
#include<conio.h>  
int main()
{
    printf("INTERNAL PRACTICAL \n");
    printf("Anukul Kumar Mishra \n");
    printf("2000300100038 \n");
    int s;
    printf("\n Enter the size of the set\n");
    scanf("%d",&s);
    int set[s];
    int i,j;
    printf("Enter the elements of the set \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&set[i]);
    }
    int size=pow(2,s);
    printf("The powerset of the given number is ");
    for(i=0;i<size;i++)
    {
       
        for(j=0;j<s;j++)
        {
           
            if(i&(1<<j))
            {
                printf("%d ",set[j]);
            }
        }
        printf("\n");
    }
    
}

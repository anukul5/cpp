#include <stdio.h>
int main()
{
    int n;
    printf("enter the Size of the Array");
    scanf("%d", &n);
    printf("how many elements you wanna put in the array");
    int p, i, pos;
    scanf("%d", &p);
    int t = n + p;
    int a[t];
    printf("enter the elements of the array before INSERTION");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ele;
    while (p--)
    {
        pos = 0;
        ele = 0;
        printf("enter the position to insert the element ");
        scanf("%d", &pos);
        printf("enter the element to insert at postion %d", pos);
        scanf("%d", &ele);
        for (i = t; i > pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = ele;
    }
    for (i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
}
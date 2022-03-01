#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
        return 0;
    

}
int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    return 0;
void push(struct stack*ptr,int val)
{
    if(isfull)
    {
        cout<<"stack overflow";
    }
    else
    top++;
    ptr->arr[ptr->top=val]
}
int main()
{
    struct stack *s;
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    
    /*if(isempty(s))
    {
        printf("stack is empty");
    }
    else
    {
        printf("stack is not empty");
    }*/
    push(10);
    
}

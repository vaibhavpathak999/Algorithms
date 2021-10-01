#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

struct lifo
{
   int st[MAXSIZE];
   int  top;
};
typedef struct lifo stack;
stack s;

void create (stack *s)
{
    s->top = -1;
}

void push (stack *s, int element)
  {
   if (s->top == (MAXSIZE-1))
   {
     printf ("\n Stack overflow");
         exit(-1);
     }
     else
     {
         s->top++;
         s->st[s->top] = element;
     }
  }

int pop (stack *s)
  {
     if (s->top == -1)
     {
        printf ("\n Stack underflow");
        exit(-1);
     }
     else
     {
        return (s->st[s->top--]);
     }
  }

int isempty (stack *s)
{
   if (s->top == -1)
          return 1;
   else
          return (0);
}

void display(stack *s)
{
    if(s->top >= 0)
    {
        printf("Elements are: ");
        for(int i=s->top; i>=0; i--)
        printf("%d\t", s->st[i]);
    }
}


int main()
{
    stack B;
    create(&B);
    push(&B,10);
    push(&B,20);
    push(&B,30);
    push(&B,100);
    push(&B,5);

}

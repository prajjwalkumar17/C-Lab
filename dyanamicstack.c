/* dynamic stack */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;	//top=-1

void display();
void push(int);
void pop();

int main()
{
    int n, ch;
    for(;;)//while(1)
    {
        printf("\n\nStack Menu\n1. Push \n2. Pop\n3. Display\n0. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:pop();
                break;
            case 3:display(); break;
	    case 0: exit(0);  break;
	    default: printf("Invalid Choice\n"); break;
        }
    }
}

void push(int item)
{
    struct node *nptr = (struct node*)malloc(sizeof(struct node));	//dynamic stack
    nptr->data = item;
    nptr->next = top;
    top = nptr;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("\n\nStack is empty ");
    }
    else{
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
   }
}

void pop()
{
    if (top == NULL)
    {
        printf("\n\nStack is empty(Stack Underflow)");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}

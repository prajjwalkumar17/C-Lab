#include <stdio.h>

int MAXSIZE = 4;       
int stack[4];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE-1)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(isempty())
      printf("\nStack is empty.\n");
   else {
      data = stack[top];
      top = top - 1;   
      return data;      
   }
}

int push(int data) {

   if(isfull())
	printf("Stack is full.\n");      
   else {
	top = top + 1;   
        stack[top] = data;
      }
}

int main() {
   // push items on to the stack 
   push(9);
   push(8);
   push(7);
   push(6);
   push(5);
   //push(4);

   printf("Item @ top of the stack: %d\n" ,peek());
   printf("Items: \n");
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}

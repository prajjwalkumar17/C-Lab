// Stacks 1.Push 2.Pop 3 Palilindrone 4.display 5.Top                                                                                           
//===================================================

#include<stdio.h>
#include<stdlib.h>
#define n 5
int stack[n],i;
int top=-1;

void push(){
if(top==n-1){
printf("stack Overflow\n");
}
else{
printf("Enter the element to Push\n");
scanf("%d",&i);
top++;
stack[top]=i;}}

void display(){
if(top==-1){
printf("\nNo elements in stack\n");
}else{
printf("The elements of stack are as follows\n");
for(int i=top;i>-1;i--){
printf("%d",stack[i]);
printf("\n");}}}

void pop(){
if(top==-1){
printf("\nUnderflow Condition\n");
}
else{
printf("\nThe element popped is %d\n",stack[top]);
top--;}}

void stackStatus(){
printf("\nTop=%d\n",stack[top]);
if(top==-1){
printf("\nUnderflow Condition\n");}
else if(top==n){
printf("\nOverflow Condition\n");}}

void pallindrone(){


}

int main(){
int choice;
while(1){
printf("\n_____MENU____\n");
printf("\n1.Push Element to stack\n2.Display Stack\n3.Pop Element\n4.Stack Status\n5.Pallindrone\n6.Exit \n");
printf("\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:push();
break;
case 2:display();
break;
case 3: pop();
break;
case 4: stackStatus();
break;
case 5 : pallindrone();
break;
case 6 : exit(0);
break;
default : printf("Invalid Selection\n");}}}

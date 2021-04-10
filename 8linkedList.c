//Singly Linked list creation display insertion and status with deletion
//---------------=======================================------------
#include<stdio.h>
#include<stdlib.h>
int choice;

struct node{
int data;
struct node *next;};
typedef struct node NODE;

NODE *head;
NODE *temp,*newnode;
int count=0;

void createSinglyll(int n){
newnode=(NODE *)malloc(sizeof(NODE));
printf("\nEnter Data for first node...\n");
scanf("%d",&(newnode->data));
newnode->next=NULL;
if(head==NULL){
newnode->next=0;
head=newnode=temp;
}else{
temp->next=newnode;
temp=newnode;}}

void display(){
temp=head;
if(temp==0){
printf("No Data");
}
else{
while(temp!=0){
printf("\n%d\t",temp->data);
temp=temp->next;
count++;
}
printf("\nNo.of nodes is %d\n",count);
}}

void insert(){

}

void delete(){

}
int main(){
int n;
while(1){
printf("\n_____MENU____\n");
printf("\n1.Create Singly Linked list\n2.Display SinglyLl\n3.Insert Nodes\n4.Delete Nodes\n5.Exit \n");
printf("\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("\nHow many Nodes are to be created?\n");
scanf("%d",&n);
createSinglyll(n);
break;
case 2:display();
break;
case 3:insert();
break;
case 4: delete();
break;
case 5 : exit(0);
break;
default : printf("Invalid Selection\n");
}}}








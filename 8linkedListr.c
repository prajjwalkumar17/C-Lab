#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}node;
node * head=NULL;
node * HEAD =NULL;
//create Node

node * createll(int n){
node * temp=NULL;
node * p=NULL;
for(int i=0;i<n;i++){
//imdivitusl idolsted node
temp =(node*)malloc(sizeof(node));
printf("\nEnter the data for node no:%d\n",i+1);
scanf("%d",&(temp->data));
temp->next=NULL;
 // if head is null make temp as first node
if(head == NULL){       
head=temp;
}else{
p=head;
while(p->next != NULL)
p=p->next;
p->next=temp;
}}
return head;
}

//Count of nodes

int counto(node * head){
int countoo=0;
node * tempo=head;
if(tempo==NULL){
return 0;
}else{
while(tempo != NULL){
tempo=tempo->next;
countoo++;
}}return countoo;}


//Display NODE

void displayll(node * head){
node * a=head;
if(a==NULL){
printf("\nNo data available\n");
}while(a != NULL){
printf("\n\t%d ->%p\n",a->data,a->next);
a=a->next;
}
printf("\n\nTotal no.of Nodes are %d\n\n",counto(HEAD));
}

//Insertion

//common fun for insertion
node* createforinsertion(){
node * newNode;
newNode=(node*)malloc(sizeof(node));
printf("\nInsert data of the new Node it will be inserted in requested Location....\n");
scanf("%d",&(newNode->data));
return newNode;
}


//Beg Insertion
node * insrtAtBeg(){
node * bn=createforinsertion();
bn->next=head;
head=bn;
printf("\nThe inserted data is %d and its address is %p\n",bn->data,bn->next);
return head;
}

//End insertion
void insrtAtEnd(){
node * en;
node * req=createforinsertion();
en=head;
while(en->next !=0){
en=en->next;
}
en->next=req;
}

//Specific pos insertion
void insrtAtSpecificPos(int pos){
int t;
node * temt;
node * trav=head;
if(pos>counto(HEAD)){
printf("\nInvalid Position!\n");
}else{
temt=createforinsertion();
//Will reach specified pos
for(t=1;t<pos;t++){
trav=trav->next;
}
temt->next=trav->next;
trav->next=temt;
}
}

node* insrt(){
int ichoice;
int pos;
printf("Where you want your data to be inserted\n1.begining\n2.end\n3.specified place\n");
scanf("%d",&ichoice);
switch(ichoice)
{
case 1: head=insrtAtBeg();
break;
case 2: insrtAtEnd();
break;
case 3: printf("\nEnter position where Node should be inserted...\n");
scanf("%d",&pos);
insrtAtSpecificPos(pos);
}
return head;
}

//Deletion

//delete at beg
node * deleteAtBeg(){
node * garbge=head;
printf("\nNode to be deleted is %d\n",head->data);
head=head->next;
free(garbge);
return head;
}

//delete at end
void deleteAtEnd(){
node * prevnode;
node * trav=head;
while(trav->next != NULL){
prevnode=trav;
trav=trav->next;
}
if(trav==NULL){
head=NULL;
}else{
prevnode->next=NULL;
}
free(trav);
}


//delete at specific pos
void ideleteAtSpecificPos(int pos){
node * delo=head;
node * tempi;
if(pos>counto(HEAD)){
printf("\nInvalid Position!\n");}
else{
for(int y=1;y<pos-1;y++){
delo=delo->next;
}tempi=delo->next;
delo->next=tempi->next;
free(tempi);
}}



node* delete(){
int ichoice;
int pos;
printf("Where you want your data to be deleted\n1.begining\n2.end\n3.specified place\n");
scanf("%d",&ichoice);
switch(ichoice)
{
case 1: head=deleteAtBeg();
break;
case 2: deleteAtEnd();
break;
case 3: printf("\nEnter position where Node should be deleted...\n");
scanf("%d",&pos);
ideleteAtSpecificPos(pos);
}
return head;
}

int main(){
int choice;
int n=0;
while(1){
printf("\n_____MENU____\n");
printf("\n1.Create Singly Linked list\n2.Display SinglyLl\n3.Insert Nodes\n4.Delete Nodes\n5.Exit \n");
printf("\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("\nHow many nodes are needed ?\n");
scanf("%d",&n);
HEAD=createll(n);
break;
case 2:displayll(HEAD);
break;
case 3:if(HEAD==NULL)
{printf("\nCreate a list first!!\n");
}else{
HEAD=insrt();}
break;
case 4: if(HEAD==NULL)
{printf("\nCreate a list first!!\n");
}else{
HEAD=delete();}
break;
case 5 : exit(0);
break;
default : printf("Invalid Selection\n");
}}
return 0;
}

// Array program to 1. create of n elements 2.display 3.add at a certain pos 4.del at certain pos 5. exit
//-----------------------------

#include<stdio.h>
#include<stdlib.h>
int n,a[10];
void create_array(){
printf("\nEnter no.of Elements\n");
scanf("%d",&n);
printf("\nEnter those Elements\n");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
}

void display(){
printf("\nThe Elements are\n");
for(int i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("\n\n\n\n");
}

void insert(){
int pos,ele;
printf("\nEnter the position out of %d where you want the Element to be inserted\n",n);
scanf("%d",&pos);
if(pos>n || pos<0){
printf("Invalid Position\n");
}
else{
printf("\nEnter the Element\n");
scanf("%d",&ele);
for(int i=n;i>=pos;i--){
a[i+1]=a[i];
}
n++;
a[pos]=ele;
}
}

void delete(){
int pos;
printf("\nEnter the position out of %d of the Element to be deleted\n",n);
scanf("%d",&pos);
if(pos>n || pos<0){
printf("Invalid Position\n");
}
else{
printf("Item deleted is %d\n",a[pos]);
for(int i=pos+1;i<n;i++){
a[i-1]=a[i];
}
n--;
}
}

int main(){
int choice;
while(1){
printf("\n_____MENU____\n");
printf("\n1.Create an array\n2.Display array\n3.Insert Element\n4.Delete Element\n5.Exit \n");
printf("\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:create_array();
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
}
}
}

/*#include<stdio.h>
#include<stdlib.h>
//#include<process.h>




Dynamic Memory Allocation is Allocation of Memory @ RUNTIME

malloc(), calloc(), realloc()

free()

the above functions / methods prototypes are available in <stdlib.h>

syntax for malloc

ptr=(cast_type*)malloc (byte_size)

example:

int *ptr;

ptr=(int *)malloc(100*sizeof(int))

this example allocates 400

syntax for calloc

ptr=(cast_type)calloc(n,sizeof(int))

ptr=(cast_type)calloc(100,sizeof(int))


realloc

ptr=realloc(ptr,newsize)

free(ptr)




int main(){
	int *ptr,i,n;

	printf("\nEnter the Number of elements\n");
	scanf("%d",&n);

	ptr=(int *)malloc(n*sizeof(int)); 	// this method allocates a block of n*sizeof(int) if n=5 then 20 bytes. block of 20 bytes
	
	for(i=0;i<n;++i)
	printf("%p \t",ptr+i);
	//ptr=(int *)calloc(n,sizeof(int));	// this function allocates 20 bytes and it divides into the chunks and it intializes all the 							// blocks into 0

	if(ptr==NULL){
		printf("Mmeory is not allocated\n");
		exit(0);
	}
	else{
		printf("Memory successfully allocated using malloc\n");
		for(i=0;i<n;++i)
			ptr[i]=i+1;
		printf("The Elements of the Array are:\n");
		for(i=0;i<n;++i)
			printf("%d\t",ptr[i]);
	}

	free(ptr);	//if free is not implemented, then it leads to memory leak

}*/
#include<stdio.h>
#include<stdlib.h>

void mallocAllocation(){
 int n,*ptr;
printf("Memory allocation by MALLOC\n\n");
printf("enter no.of elements needed to be stored\n");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
printf("enter those elements\n");
for(int i=0; i<n; i++){
scanf("%d",&ptr[i]);
}
if(ptr==NULL){
printf("\nMemory not allocated\n");
}else{
for(int i=0;i<n;i++){
printf("The entered value at position %d is %d\n",i,ptr[i]);
}
}
free(ptr);
}

void callocAllocation(){
int n,*ptr;
printf("Memory allocation by CALLOC\n\n");
printf("enter no.of elements needed to be stored\n");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
printf("enter those elements\n");
for(int i=0; i<n; i++){
scanf("%d",&ptr[i]);
}
if(ptr==NULL){
printf("\nMemory not allocated\n");
}else{
for(int i=0;i<n;i++){
printf("The entered value at position %d is %d\n",i,ptr[i]);
}
}
free(ptr);
}

void reallocExtension(){
int n,*ptr;
printf("Memory extension by REALLOC\n");
printf("Enter new no.of elements to be stored\n");
ptr=(int *)realloc(ptr,n*sizeof(int));
printf("enter those new elements\n");
for(int i=0; i<n; i++){
scanf("%d",&ptr[i]);
}
if(ptr==NULL){
}else{
for(int i=0;i<n;i++){
printf("The entered value at position %d is %d\n",i,ptr[i]);
}
}
free(ptr);
}

void main(){
int c;
printf("Choose one of the following memory allocation \n1.Malloc\t2.Calloc\t3.Realloc\n");
printf("Enter your choice/n");
scanf("%d",&c);
switch(c){
case 1:mallocAllocation();
break;
case 2:callocAllocation();
break;
case 3:reallocExtension();
break;
}       
}

#include <stdio.h> 
#include<math.h>


void tOH(int n, char from, char to, char aux) 
{ 
	if (n == 1) 
	{ 
		printf("\n Move disk 1 from %c to %c", from, to); 
		return; 
	} 
	tOH(n-1, from, aux, to); 
	printf("\n Move disk %d from %c to %c", n, from, to); 
	tOH(n-1, aux, to, from); 
} 

int main() 
{ 
	int n; 
	printf("Enter the Number Disks to be Moved:");
	scanf("%d",&n);
	tOH(n, 'A', 'C', 'B');  
	printf("\nNumber of Moves:%d\n",(int)pow(2,n)-1);
	return 0; 
} 


#include<stdio.h>

int main(){
	// initialization of sparse matrix
	int sparsematrix[4][5]={
		
			{0,0,3,0,4},
			{0,0,5,7,0},
			{9,0,0,0,8},
			{0,2,6,0,0}				
		},i,j;


	int size=0;
	//code to find the number of values in sparse matrix
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			if(sparsematrix[i][j]!=0)
				size++;
	// size is number of non-zero values
	printf("The number of values in sparse matrix is:%d",size);
	
	printf("\nElements of Sparse Matrix\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d ",sparsematrix[i][j]);
		}
		printf("\n");
	}

	int tripletsmatrix[3][size];
	int k=0;

	//0th row and 2nd column and its  value is 3
	//0th row and 4th column and its  value is 4
	//1st row and 2nd column and its  value is 5
	//1st row and 3rd column and its  value is 7
		
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(sparsematrix[i][j]!=0){
				tripletsmatrix[0][k]=i; 				// row index
				tripletsmatrix[1][k]=j;					// Column index
				tripletsmatrix[2][k]=sparsematrix[i][j];		// value	
				k++;	
				

			}
		}
	}


	printf("\nElements of triplets Matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<size;j++){
			printf("%d ",tripletsmatrix[i][j]);
	}
	printf("\n");
	}	
	return 0;

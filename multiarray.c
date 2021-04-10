#include <stdio.h>

int main(){

   int a[2][3][2] = {
      { {1,-1}, {2,-2}, {3,-3} },
      { {4,-4}, {5,-5}, {6,-6} }
   };

   // displaying array values 

   for (int x = 0; x < 2; x++) {
     for (int y = 0; y < 3; y++) {
       for (int z = 0; z < 2; z++) {
         printf("%p ",&a[x][y][z]);
       }
	printf("\n");
     }
	//printf("\n");
   }
   return 0;
}

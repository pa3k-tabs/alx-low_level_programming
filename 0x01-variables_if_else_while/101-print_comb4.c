#include <stdio.h>

int main() {
   int i, j, k;

   for(i=0; i<10; i++){
      for(j=i+1; j<10; j++){
         for(k=j+1; k<10; k++){
            printf("%d%d%d\n", i, j, k);
         }
      }
   }

   return 0;
}

#include <collatz.h>

/* 
 * Application which can do several things:
 *   Calc. the collatz decomp of one number
 *           
 */
int main(void){

   itype n;
   printf("Enter a positive integer:\n");
   #ifdef UINT
   scanf("%u",&n);
   printf("Number entered:%u\n",n);
   #else 
   scanf("%lu",&n);
   printf("Number entered:%lu\n",n);
   #endif
   vector h;
   h = collatz(n,CHUNKSIZE);
   printVec(h,10);
   deleteVec(h);
   return 0;
}	

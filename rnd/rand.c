#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SEED 12345
#define SZ 1000

int main(void)
{
    int i;
    int arr[SZ];  
    
    /* Set the seed of pseudo-random number generator */
    #ifdef SETSEED
       printf("  Seed set to:%d\n", SEED);
       srand(SEED); 
    #endif

    #ifndef SETSEED 
       printf("  Seed selected based on time!\n");
       srand(time(NULL)); 
    #endif     

    /* Display the max. number rand will return */
    printf("  Max. random number:%d\n", RAND_MAX);

    /* Generate random numbers */
    for(i=0; i<SZ;i++)
	arr[i]=rand();    

    /* Print first 10 numbers */
    for(i=0; i<10; i++)
        printf("%15d\n",arr[i]);	    

    return 0;

}	

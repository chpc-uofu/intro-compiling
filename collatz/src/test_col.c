#include <collatz.h>

int main(void)
{
    itype n=57;
    vector h;
    h = collatz(n,CHUNKSIZE);
    printVec(h,10);
    deleteVec(h);
    return 0;
}	

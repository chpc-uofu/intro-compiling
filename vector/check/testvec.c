#include <vector.h>

int main(void)
{
   vector g,h;

   printf("  Checking some vector functionality ...\n\n");
   printf("    Type:%s\n", STR);
   printf("    Sizeof(itype):%ld\n", sizeof(itype));
   h = createVec(15);
   h->vec[3]=10;
   g = createVec(10);
   g->vec[3]=10;
   printf("    Are g and h the same? %d and should be 0\n", isEqualVec(g,h));
   printf("    Vector h:\n");
   printVec(h,5);
   deleteVec(h);
   return 0;
}	

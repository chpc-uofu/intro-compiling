#include <stdio.h>
#include <stdlib.h>

/* Data structures */
#ifdef UINT
  #define STR   "UINT"
  #define itype unsigned int
#else
  #define STR   "ULONG"
  #define itype unsigned long int  
#endif

typedef struct VECTOR{
   itype *vec;
   itype sz;
   } *vector;

/* ANSI-C version */
typedef enum {false,true} bool;

/* Functions */
vector createVec(itype sz);
vector changeLenVec(vector v, itype newlen);
void deleteVec(vector v);
void printVec(vector v, int colw);
bool isEqualVec(vector p, vector q);

#include <collatz.h>

vector collatz(itype n, itype chunksz)
{
   itype num, ind=0;	
   vector hist;

   hist = createVec(chunksz);
   hist->vec[ind] = n;
   num = n;
   while(num!=1)
   {	    
      ind++;
      if(ind==hist->sz)
         hist=changeLenVec(hist,hist->sz+chunksz);

      if(num%2==0)
         num /=2;      
      else
         num = 3*num+1; 
      hist->vec[ind]=num;    
   }	
    
   /* If hist->sz : more space than REQUIRED => shrink */
   hist = changeLenVec(hist,ind+1);
   return hist; 
} 


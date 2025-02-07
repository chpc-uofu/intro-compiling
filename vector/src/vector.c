#include <vector.h>

/**
 * Function Name: createVec
 * Description: Function which creates a vector of length sz 
 *              Each element is of the type long unsigned int.
 * Parameters:             
 *   sz: Length of the new vector
 * Return value: Vector object
 */  
vector createVec(itype sz){
	
   vector v;
   v = (vector) malloc(sizeof(struct VECTOR));
   if(v==NULL){
      printf("ERROR:: createVec() -> unable to allocate vector v!\n");      	   
      exit(1);
   }   

   v->sz = sz;
   v->vec = (itype *) malloc(sizeof(itype)*v->sz);
   if(v->vec==NULL)
   {
      printf("ERROR:: createVec() -> unable to allocate vector v->vec!\n");
      exit(1);
   }
   return v;
}

/**
 * Function Name: changeLenVec
 * Description: Function which can modify (grow|shrink) the length of the vector.
 * Parameters: 
 *   v : vector            
 *   newlen: new length of vector
 * Return value: vector object
 */
vector changeLenVec(vector v, itype newlen){

   v->sz  = newlen;
   v->vec = (itype *) realloc(v->vec, sizeof(itype)*v->sz);    
   if(v->vec==NULL)
   {
      printf("ERROR:: changeLenVec() -> unable to modify the len of v->vec!\n");
      exit(1);
   }
   return v; 
}

/**
 * Function Name: printVec
 * Description: Function which prints a vector
 * Parameters: 
 *   v : vector            
 *   colw: width of a column (output)
 * Return value: none
 */
void printVec(vector v, int colw){

   int i;
   for(i=0; i< v->sz;i++){
       #ifdef UINT
       printf(" %8u", v->vec[i]);
       #else
       printf(" %8lu", v->vec[i]);
       #endif
       if(((i+1)%colw==0) )
	  printf("\n");      
   }
   printf("\n");   
   return;	   
}	

/**
 * Function Name: deleteVec
 * Description: Function which deletes a vector in memory (heap)
 * Parameters: 
 *   v : vector            
 * Return value: none
 */
void deleteVec(vector v){

   if(!(v==NULL)){
      free(v->vec);
      free(v);
   }
   return;   
}

/**
 * Function Name: isEqualVec
 * Description: Function checks whether two vectors are equal
 * Parameters: 
 *   p : vector
 *   q : vector            
 * Return value: bool
 */
bool isEqualVec(vector p, vector q){

   itype i;
   if(p->sz!=q->sz) 
      return false;
   for(i=0; i<p->sz; i++){
       if(p->vec[i]!=q->vec[i])
          return false;	       
   }
   return true;
}   

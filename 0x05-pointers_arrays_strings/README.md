Pointers arrays and strings
A pointer is a variable whose value is the address of another variable
int    *ip;    /* pointer to an integer */
double *dp;    /* pointer to a double */
float  *fp;    /* pointer to a float */
char   *ch     /* pointer to a character */
ej:
#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
	    int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
	    printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
	    printf("Value of *ip variable: %d\n", *ip );

   return 0;
	 
}
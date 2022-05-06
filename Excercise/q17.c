//Q17

#include<stdio.h>
#define MAX 3 
int main()
{
    printf("Value of MAX is %d\n", MAX);
    #undef MAX                                       //here first we define macro and then undef the macro so that remaining #ifdef will skip 
    #ifdef MAX                                      //for solution of that we can use #ifndef so 2nd printf will also print
    printf("Have a good day");
    #endif
}

/*output:
Value of MAX
*/

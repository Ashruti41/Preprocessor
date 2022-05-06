//use of #undef and #ifdef directives


#include <stdio.h>
#define FLAG
int main()
{
    int a=20,b=4;
    #ifdef FLAG                                          //for particular operation of FLAG
    printf("FLAG is defined\n");
    a++;
    b++;
    #endif
    #undef FLAG                                         //use for undefined FLAG
    #ifdef FLAG
    printf("Prepocessor\n");
    a++;
    b++;
    #endif
    printf("a=%d, b=%d\n",a,b);
    printf("Program completed\n");
}


/* OUTPUT:
FLAG is defined
a=21, b=5
Program completed
*/

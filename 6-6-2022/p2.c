//use of #ifndef directives


#include<stdio.h>

int main()
{
    int a=20,b=4;
    #ifndef MAX                                      //here MAX is not defined earlier for use of #ifndef we can directly run our code without define macros
    printf("MAX is not defined\n");
    a--;
    b--;
    #endif
    printf("a=%d, b=%d\n",a,b);
    printf("Program completed\n");
}


/*  OUTPUT:
MAX is not defined
a=19, b=3
Program completed
*/

//Q14

#include<stdio.h>
#define Y 10
int main()
{
    #if X || Y && Z 
    printf("Sea in depth\n");
    #else
    printf("See in depth\n");
    #endif
}

/*output:
See in depth
*/

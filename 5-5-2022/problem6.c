//#define is used for define a name as global
//where as #undef is used for undefined the macro.
// when we use first #define and then #undef that time #undef is responsible for undefined the macors in the program

#include<stdio.h>
#define PI 
 
int main()
{
    #undef PI
    #if defined(PI)
    printf("macro has been defined");
    #else
    printf("macro has been undefined");
    #endif
    
}

/*OUTPUT:
macro has been defined
*/

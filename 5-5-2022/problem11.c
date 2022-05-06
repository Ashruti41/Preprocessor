//#if...#endif


#include<stdio.h>
#define FLAG 8

int main()
{
    int a=20, b=4;
    #if FLAG >=char32_t                                                //flag value is non zero so #if printf will excecute
    printf("Value of FLAG is greater than or equal to 3\n");
    a=a+b;
    b=a*b;
    printf("Value of variable a and b have been changed\n");
    #endif
    
    printf("a = %d,b=%d\n",a,b);
    printf("Program completed");
}

/*OUTPUT:
Value of FLAG is greater than or equal to 3
Value of variable a and b have been changed
a = 24,b=96
Program completed
*/

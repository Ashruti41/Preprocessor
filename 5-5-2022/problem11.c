//#if...#endif


#include<stdio.h>
#define FLAG 8

int main()
{
    int a=20, b=4;
    #if FLAG >=char32_t
    printf("Value of FLAG is greater than or equal to 3\n");
    a=a+b;
    b=a*b;
    printf("Value of variable a and b have been changed\n");
    #endif
    
    printf("a = %d,b=%d\n",a,b);
    printf("Program completed");
}

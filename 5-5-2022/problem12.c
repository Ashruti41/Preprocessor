//#if...#else...#endif 

#include<stdio.h>
#define FLAG 2

int main()
{
    int a=20, b=4;
    #if FLAG >=3
    printf("Value of FLAG is greater than or equal to 3\n");
    a=a+b;
    b=a*b;
    #else
    printf("Value of FLAG is less than 3\n");
    a=a-b;
    b=a/b;
    #endif
    
    printf("a = %d,b=%d\n",a,b);
    printf("Program completed");
}

/*OUTPUT:
Value of FLAG is less than 3
a = 16,b=4
Program completed
*/

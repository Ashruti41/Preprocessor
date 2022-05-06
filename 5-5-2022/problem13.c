//#if..#elif..#else..#endif    we can take nested loop of if in our macro code

#include<stdio.h>
#define FLAG 1

int main()
{
    int a=20, b=4;
    #if FLAG==0
    printf("Value of FLAG is zero\n");
    a++;
    b++;
    #elif FLAG==1
    printf("Value of FLAG is One\n");
    a--;
    b--;
    #elif FLAG==2
    printf("Value of FLAG is two");
    a=a-3;
    b=b-3;
    #else
    printf("Value of FLAG is greater than two or less than zero\n");
    a=a+b;
    b=a-b;
    #endif
    
    printf("a = %d,b=%d\n",a,b);
    printf("Program completed");
}
/*OUTPUT:
Value of FLAG is One
a = 19,b=3
Program completed
*/

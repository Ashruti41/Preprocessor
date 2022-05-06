//Q18

#include<stdio.h>
#define PRINT1(message) printf(message);
#define PRINT2(message) printf("message");
#define PRINT3(message) printf(#message);
int main()
{
    PRINT1("If we rest, we rust.\n");            //it use as a macro
    PRINT2("If we rest, we rust.\n");           //it is only print message
    printf("\n");
    PRINT3("If we rest, we rust.\n");           //it is stringizing operation
}

/*output:
If we rest, we rust.
message
"If we rest, we rust.\n"
*/




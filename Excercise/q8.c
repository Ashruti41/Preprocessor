//Q8

#include<stdio.h>
#define .;
int main()
{
    printf("If the lift to success is broken.").
    printf("Try the stairs").
}
//this program gives error because we can't given . as a macro name it is not a valid C identifier
//if we want to try run this code for that we sholud given it a valid macro name like

#include<stdio.h>
#define Dot ;
int main()
{
    printf("If the lift to success is broken.")Dot
    printf("Try the stairs")Dot
}

/*output:
If the lift to success is broken.Try the stairs
*/
